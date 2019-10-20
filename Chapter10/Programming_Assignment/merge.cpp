#include "std_lib_facilities.h"

int main()
try{
	string iname;						//recieve first file from user
	cout << "which file would you like to use: ";
	cin >> iname;
	ifstream ist(iname);				//open first file for reading	
	if(!ist) error("can't open file ", iname);
	vector <string> files;				//fill 'files' with input from 'iname'
	string input;
	while(ist >> input){				
		files.push_back(input);
	}
	string oname;						//recieve second file from user
	cout << "which file would you like to merge with: ";
	cin >> oname;
	ofstream ost(oname, ios_base::app);			//open second file for appending
	if(!ost) error("can't open file: ",oname);
	for(int i = 0; i < files.size(); ++i){			//add each element in 'files' to 'oname'
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
