#include "std_lib_facilities.h"

int main()
try{
	//recieve first file from user
	string iname;						
	cout << "which file would you like to use: ";
	cin >> iname;

	//open first file for reading	
	ifstream ist(iname);				
	if(!ist) error("can't open file ", iname);

	//fill 'files' with input from 'iname'
	vector <string> files;				
	string input;
	while(ist >> input){				
		files.push_back(input);
	}

	//recieve second file from user
	string oname;						
	cout << "which file would you like to merge with: ";
	cin >> oname;

	//open second file for appending
	ofstream ost(oname, ios_base::app);			
	if(!ost) error("can't open file: ",oname);

	//add each element in 'files' to 'oname'
	for(int i = 0; i < files.size(); ++i){			
		ost << files[i] << " ";
	}

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
