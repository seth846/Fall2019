#include "std_lib_facilities.h"

int main()
try{

	// Input

	string file_name = "sample_input.txt";
	
	// Open file and check for erros
	ifstream ifs{file_name};
	if(!ifs) error("Can't open file ", file_name);

	// Read from file
	string input_data;
	ifs >> input_data;

	// Output

	string output_name = "sample_output.txt";
	
	// Open file and check erros
	ofstream ofs{output_name};
	if(!ofs) error("Can't open file ", output_name);

	// Write to file
	ofs << "Sample output\n" << input_data << '\n';
	
	// Files automatically close
}
catch(exception& e){
	cerr << "Error: " << e.what() << " Now Exiting\n";
	return 1;
}
catch(...){
	cerr << "Unknown Error! Now exiting\n";
}
