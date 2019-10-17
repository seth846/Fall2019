#include "std_lib_facilities.h"
struct Reading{			//create Reading type
	int hour;
	int temperature;
};
ostream& operator<<(ostream& os, Reading& R){	//create output operator for Reading
	int hour, temperature;
	return os << hour << ',' << temperature;
}	
istream& operator>>(istream& is, Reading& R){	//create input operator for Reading
	int hour, temperature;
	char ch1 = '(';
	char ch2 = ',';
	char ch3 = ')';
	is >> ch1 >> hour >> ch2 >> temperature >> ch3;
	if(!is) return is;
	if(ch1 != '('|| ch2 != ',' || ch3 != ')'){
	      is.clear(ios_base::failbit);
     	      return is;
	}
	R = Reading{hour, temperature};
	return is;
}
int main()
try{
	cout << "enter name of file you want to use: ";		//ask for file to read
	string iname;					//open file 'iname' for reading	
	cin >> iname;
	ifstream ist(iname);				
	vector <Reading> temps;			//initialize
	int avrhour = 0;
	int avrtemp = 0;
	for(int i = 0; i < temps.size(); ++i){		//add all hours and temperatures from file
		avrhour += temps[i].hour;
		avrtemp += temps[i].temperature;
	}	
	cout << avrhour << ',' << avrtemp << ',' 	//print the averages
	<< temps[temps.size()/2].hour << temps[temps.size()/2].temperature;	//print the median of the file
	return 0;		
}
catch(exception& e){
        cerr << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
	return 2;
}
