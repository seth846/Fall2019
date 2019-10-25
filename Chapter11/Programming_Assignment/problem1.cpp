#include "std_lib_facilities.h"

int main()
try{
	vector <string> file;
	cout << "enter name of input file: ";
	string iname;
	cin >> iname;
	ifstream ifs(iname);
	if(!ifs) error("can't open file ", iname);
	while(ifs){
		string word;
		ifs >> word;
		file.push_back(word);
	}
	for(int i = 0; i < file.size(); ++i){
		string word;
		word = file[i];
		for(int n = 0; n < word.size(); ++i){
			if(word[n] == 'a' || word[n] == 'e'|| word[n] == 'i'||word[n] == 'o'||word[n] == 'u'){
				delete[word[n]];	
			}
			else;	
		}
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
