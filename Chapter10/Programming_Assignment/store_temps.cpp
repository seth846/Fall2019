#include "std_lib_facilities.h"
struct Reading {
	int rand() hour;
	int rand() temp;
};
int main()
try{
	int hour;
	int temp;
	string oname;
	cout << "enter name of file: ";
	cin >> oname;
	ostream ost(oname);
	if(!ost) error("can't open file ", oname);
	for( int i =0; i < 55; ++i){
		ost << Reading
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
