#include "std_lib_facilities.h"

int main()
try{
	cout << "please enter name of file you want to use: ";
	string iname;
	cin >> iname;
	ifstream ist{iname};
	int total = 0;
	if(!ist) error("can't open input file" ,iname);
	while(ist){
		int current;
		ist >> current;
		total += current;
	}
	cout << "the sum of all the digits is: " << total;
}
catch(exception& e){
        cerr << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
	return 2;
}
