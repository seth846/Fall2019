#include <string>
#include <fstream>
#include <iostream>

using namespace std;

// This file implements the as_bytes function described in the textbook.
// We can use this file to read in the programs own binary. We can use the program to read itself

template<class T>
char* as_bytes(T& i){
	void* addr = &i;
	return static_cast<char*>(addr);
}

int main(){

	string file_name;
	
	cin >> file_name; // Use name of compiled file

	// open file in binary mode
	ifstream ifs {file_name, ios_base::binary};
	if(!ifs) return -1; // exit program if doesn't open

	// Read in 1 byte at a time, convert to char and print
	for(char x; ifs.read(as_bytes(x), sizeof(char)); )
		cout << x;

} // ifs goes out of scope so it closes
