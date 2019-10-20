#include "std_lib_facilities.h"

int main()
try{
	cout << "please enter name of file you want to use: ";
	string iname;
	cin >> iname;
	ifstream ist{iname};
	if(!ist) error("can't open input file" ,iname);//open the input file
	int total = 0;
	while(ist){
		int current;
		ist >> current;
		total += current;
	}				//add all digits in file to total
	cout << "the sum of all the digits is: " << total;
}					//print result
catch(exception& e){
        cerr << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
	return 2;
}
