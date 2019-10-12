#include <sstream>
#include <string>
#include <fstream>

using namespace std;

// This file creates 10 output files of the form output_N.txt with the number
// N written in the file.

int main(){
	
	// base of the filename
	string file_base = "output_";
	

	for(int N = 1; N<10; ++N){
	
		// Initialize stringstream with base 
		// Set stream to append mode
		ostringstream oss{file_base, ios_base::app};
	
		// Append N.txt to file_base, N is converted to str 	
		oss << N << ".txt"; 

		// Use os.str() to convert to regular string
	        ofstream ofs{oss.str()};

		// Write to file
       		ofs << N << endl;	       
	
	} //ofs and oss go out of scope and are closed. 
}
