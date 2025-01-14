#include "std_lib_facilities.h"
struct Reading{			//create Reading type
	int hour;
	int temperature;
};

ostream& operator<<(ostream& os, Reading& R){	//create output operator for Reading
	int hour, temperature;
	return os << '(' << hour << ',' << temperature << 'f' << ')';
}	
istream& operator>>(istream& is, Reading& R){	//create input operator for Reading
	int hour, temperature;			//initialize
	char ch1 = '(';
	char ch2 = ',';
	char ch3 = ')';
	char units;
	is >> ch1 >> hour >> ch2 >> temperature >> units >> ch3;
	if(!is) return is;
	
	//check that all characters are acceptable
	if(ch1 != '('|| ch2 != ',' || ch3 != ')'&&!(ch4== 'f'|| ch4 == 'c')){    
	      is.clear(ios_base::failbit);
     	      return is;
	}
	
	//if the units are celsius convert to fareinheit 
	if(ch4 == 'c'){				
		temperature*=1.8;
		temperature+=32;
	}
	R = Reading{hour, temperature};		//update R
	return is;
}

int main()
try{
	string iname;					//open file 'iname' for reading
	cout << "enter name of file you want to use: ";		//ask for file to read
	cin >> iname;

	ifstream ist(iname);
	if(!ist) error("can't open file ", iname);	


	vector<Reading> temps;			//initialize
	Reading R;
	string units;
	while(ist >> R){			//recieve file input	
		cout << R.hour << ", " << R.temperature << '\t';
		temps.push_back(R);
	}

	//add all hours and temperatures from file together
	int avrtemp;
	for(int i = 0; i < temps.size(); ++i){		
		avrtemp += temps[i].temperature;
	}	

	cout << "Average temperature is " << avrtemp << endl; 				//print the averages
	
	//<< temps[temps.size()/2].hour << temps[temps.size()/2].temperature;	//calculate and print the median of the file

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
