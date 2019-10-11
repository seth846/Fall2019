#include <string>
#include <fstream>
#include <iostream>

using namespace std;

template<class T>
char* as_bytes(T& i){
	void* addr = &i;
	return static_cast<char*>(addr);
}

int main(){
	string name;
	
	cin >> name;

	ifstream ifs {name, ios_base::binary};
	if(!ifs) return -1;

	for(int x; ifs.read(as_bytes(x), sizeof(char)); )
		cout << x;

	return 0;
}
