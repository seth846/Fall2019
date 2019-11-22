#include "std_lib_facilities.h"

int main()
try{
/*	int year = 1998;				//print 1998 in dec, oct, and hex
	cout << showbase << year << " dec \t" 
		<< oct << year << " oct \n"
		<< hex << year << " hex \t"
		<< dec << 45 << " dec \n";		//change back to dec then print 45
*/
/*	cout << "enter 4 numbers: ";			//get input
	int a,b,c,d;					
	cin >> a >> oct >> b >> hex >> c >> d;				//read in input as dec, oct, hex, and hex
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl;	//print converted input
*/
/*	float f = 1234567.89;			//print f using defaultfloat, fixed, and scientific
	cout << f << '\t'
		<< fixed << f << '\t'	//most precise
		<< scientific << f << '\t';
*/
	vector <string> lastnames;	//create a vector for each catagory
	vector <string> firstnames;
	vector <string> numbers;
	vector <string> email;
	cout << "enter information: ";		//get input
	for(int i = 0; i < 5; ++i){		//put input into corresponding vector
		string a;
		cin >> a;
		lastnames.push_back(a);
		cin >> a;
		firstnames.push_back(a);
		cin >> a;
		numbers.push_back(a);
		cin >> a;
		email.push_back(a);
	}
	for(int i = 0; i < lastnames.size(); ++i){	//print input with field width set
		cout << setw(7) << lastnames[i] 
			<< setw(7) << firstnames[i]
			<< setw(11) << numbers[i]
			<< setw(24) << email[i] << endl;
	}
}
catch(...){
	cerr << "unknown error";
}
/*
	INPUT USED: 	
	Smith Joe 8324484734 telumda3rd@gmail.com
	Frank John 2815358769 johnnyboy69@hotmail.com
	Wayne Bruce 2815430664 bats4ever@gmail.com
	Kent Clark 7139564389 superop@at&t.net
	Batson Billy 2814330960 xXshazamXx@comcast.net
*/
