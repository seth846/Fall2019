#include "std_lib_facilities.h"

int main()
try{



}
catch(exception& e){
	cerr << e.what() << endl;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
}
