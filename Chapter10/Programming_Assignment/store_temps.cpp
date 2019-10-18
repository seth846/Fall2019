#include "std_lib_facilities.h" 

struct Reading{			//create struct Reading	//srand(time(nullptr));
	int hour; 
	int temp;
};
int main()
try{
	int hour;
	int temp;
	string oname;
	cout << "enter name of file: ";        // get file "oname"
	cin >> oname;
	cout << "please enter units(celsius/fareinheit): ";	//get units
	string units;						
	cin >> units;
	ofstream ost(oname);
	if(!ost) error("can't open file ", oname);
	vector <Reading> data;
	for( int i =0; i < 55; ++i){			//fill vector data with members of Reading
		hour = rand();
		temp = rand();
		data.push_back(Reading{hour, temp});
	}
	for(int i = 0; i < data.size(); ++i){		//print all members of data  
		if(units == "celsius") ost << '(' << data[i].hour << ", " << data[i].temp << "c)\t";  //print celsius
		else ost << '(' << data[i].hour << ", " << data[i].temp << "f)\t";		//print farenheit
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
