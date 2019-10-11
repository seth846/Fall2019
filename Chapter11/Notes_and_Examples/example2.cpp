#include "std_lib_facilities.h"
#include <sstream>

int main(){

	string base = "output_";
	

	for(int n = 1; n<10; ++n){
		ostringstream os{base, ios_base::app};
		os << n << ".txt";
	       ofstream ofs{os.str()};
       		ofs << n << endl;	       
	}

}
