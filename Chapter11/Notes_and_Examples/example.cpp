#include <std_lib_facilities.h>

int main(){

	cout << hex << 32 << endl;
	cout << showbase << 128 << endl;

	cout << dec << 32 << endl;

	int x;
	cin.unsetf(ios::hex);
	cin.unsetf(ios::oct);
	cin.unsetf(ios::dec);
	cin >> x;

	cout << x << endl;
}
