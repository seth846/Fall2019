#include "std_lib_facilities.h"

int main()
try{
	string iname1;
	string iname2;
	cout << "which file would you like to use first: ";		//recieve first file from user
	cin >> iname1;
	cout << "which file would you like to use second: ";		//recieve second file from user
	cin >> iname2;
	vector <string> files;					
	string input;
	ifstream ist(iname1);					//open first file for reading
	if(!ist) error("can't open file ", iname1);
	while(ist >> input){					//add input from first file to 'files'
		files.push_back(input);
	}
	ifstream ifs(iname2);					//open second file for reading
	if(!ifs) error("can't open file ", iname2);
	while(ifs >> input){					//add input from second file to 'files'
		files.push_back(input);
	}
	string oname;						//get file for writing from user
	cout << "where would you like to combine the files: ";
	cin >> oname;
	ofstream ost(oname);					//open 'oname' for writing
	if(!ost) error("can't open file ", oname);
	for(int i = 0; i < files.size(); ++i){			//write each element in 'files' to 'oname'
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
