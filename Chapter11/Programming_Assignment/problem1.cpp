#include "std_lib_facilities.h"

bool isvowel(char ch){							//checks if ch is a vowel
	if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	else return false;
}

int main()
try{
	vector <string> file;		
	vector <string> output;	
	cout << "enter name of input file: ";		//get input file
	string iname;
	cin >> iname;
	ifstream ifs(iname);				
	if(!ifs) error("can't open file ", iname);
	while(ifs){					//read input file into vector
		string word;
		ifs >> word;
		file.push_back(word);
	}						
	for(int i = 0; i < file.size(); ++i){		//iterate through 'file'	
		string word;
		string wrd;
		word = file[i];
		for(int n = 0; n < word.size(); ++n){	//iterate through word checking for vowels
			if(isvowel(word[n]) == true);		//if word[n] is a vowel do nothing
			else wrd += word[n];		//if word[n] is not a vowel add it to wrd	
		}	
		output.push_back(wrd);		
	}
	ofstream ofs(iname);
	if(!ofs) error("can't open file ",iname);
	for(int i = 0; i < output.size(); ++i){
		ofs << output[i] << " ";	
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
