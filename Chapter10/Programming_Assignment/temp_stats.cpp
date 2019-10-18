#include "std_lib_facilities.h"
struct Reading{			//create Reading type
	int hour;
	int temperature;
};
ostream& operator<<(ostream& os, Reading& R){	//create output operator for Reading
	int hour, temperature;
	return os << hour << ',' << temperature << 'f';
}	
istream& operator>>(istream& is, Reading& R){	//create input operator for Reading
	int hour, temperature;			//initialize
	char ch1 = '(';
	char ch2 = ',';
	char ch3 = ')';
	char ch4;
	is >> ch1 >> hour >> ch2 >> temperature >> ch4 >> ch3;
	if(!is) return is;
	if(ch1 != '('|| ch2 != ',' || ch3 != ')'||ch4 != 'f'||ch4 != 'c'){    //check that all characters are acceptable
	      is.clear(ios_base::failbit);
     	      return is;
	}
	if(ch4 == 'c'){				//if the units are celsius convert to fareinheit 
		temperature*=1.8;
		temperature+=32;
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
	Reading R;
	int avrhour;
	int avrtemp;
	string units;
	while(ist >> R){			//recieve file input	
		temps.push_back(R);
	}
	for(int i = 0; i < temps.size(); ++i){		//add all hours and temperatures from file together
		avrhour += temps[i].hour;
		avrtemp += temps[i].temperature;
	}	
	cout << avrhour << ',' << avrtemp << ',' 				//print the averages
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
//compiles but does not give correct output
