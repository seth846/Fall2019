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
}
