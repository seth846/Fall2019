#include "std_lib_facilities.h" 

struct Reading{			//create struct Reading	
	int hour; 
	int temp;
};

int main()
try{
	// get file "oname"
	string oname;
	cout << "enter name of file: ";        
	cin >> oname;

	//get units
	cout << "please enter units(celsius/fareinheit): ";	
	string units;						
	cin >> units;

	ofstream ost(oname);
	if(!ost) error("can't open file ", oname);

	srand(time(nullptr));

	//fill vector data with members of Reading
	vector <Reading> data;
	int hour, temp;
	for( int i = 0; i < 55; ++i){			
		hour = rand()% 200; 
		temp = rand()% 200;
		data.push_back(Reading{hour, temp});
	}

	//print all members of data  
	for(int i = 0; i < data.size(); ++i){		
		if(units == "celsius")
			ost << '(' << data[i].hour << ", " << data[i].temp << "c)\t";  //print celsius
		else
			ost << '(' << data[i].hour << ", " << data[i].temp << "f)\t";  //print farenheit
	}
}
catch(exception& e){
        cerr << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
	return 2;
}
