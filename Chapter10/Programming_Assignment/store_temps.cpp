#include "std_lib_facilities.h" 
//#include <rand>
#include <ctime>

struct Reading{			//create struct Reading	//srand(time(nullptr));
	int hour = rand();
	int temp = rand();
};
int main()
try{
	int hour;
	int temp = 0;
	string oname;
	cout << "enter name of file: ";        // get file "oname"
	cin >> oname;
	ofstream ost(oname);
	if(!ost) error("can't open file ", oname);
	vector <Reading> data;
	for( int i =0; i < 55; ++i){			//fill vector data with members of Reading
		data.push_back(Reading{hour, temp});
	}
	for(int i = 0; i < data.size(); ++i){			//print all members of data
		ost << '(' << data[i].hour << ", " << data[i].temp << ")\t";
	}
}
catch(exception& e){
        cerr << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
	return 2;
}
//when run with rand() would not compile threw "no such directory"
