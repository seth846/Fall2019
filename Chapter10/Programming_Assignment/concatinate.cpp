#include "std_lib_facilities.h"

int main()
try{
	//recieve first file from user
	string iname1;
	cout << "which file would you like to use first: ";		
	cin >> iname1;

	//recieve second file from user
	string iname2;
	cout << "which file would you like to use second: ";		
	cin >> iname2;

	//open first file for reading
	ifstream ist(iname1);					
	if(!ist) error("can't open file ", iname1);
	
	//add input from first file to 'files'
	vector <string> files;					
	string input;
	while(ist >> input){					
		files.push_back(input);
	}
	
	//open second file for reading
	ifstream ifs(iname2);					
	if(!ifs) error("can't open file ", iname2);

	//add input from second file to 'files'
	while(ifs >> input){					
		files.push_back(input);
	}

	//get file for writing from user
	string oname;						
	cout << "where would you like to combine the files: ";
	cin >> oname;

	//open 'oname' for writing
	ofstream ost(oname);					
	if(!ost) error("can't open file ", oname);

	//write each element in 'files' to 'oname'
	for(int i = 0; i < files.size(); ++i){			
		ost << files[i] << " ";
	}
	
	cout << "complete" << "\n";			//print complete	
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
//switched with summation
