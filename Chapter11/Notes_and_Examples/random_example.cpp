#include <random>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
	int var = rand(); // Not yet seeded, will be same eveytime
	cout << "var = " << var << endl;
	
       	srand(time(nullptr));	// seed rand, only need to do this once per file.

	int better_var = rand();  // rand was seeded, Will be different everytime.	
	cout << "better_var = " << better_var << endl;

	// The random number is usually very big. 
	// If we want number in between [0, randMax] use modulo
	
	int randMax = 1000;
	
	int smaller_var = rand() % randMax; // in range [0, randmax]
}
