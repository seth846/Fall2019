#include "std_lib_facilities.h"

vector<string> split(const string& s){			
	vector <string> seperate;
	string t = "";	
	for(int i = 0; i < s.size(); ++i){		//seperate 's' at whitespace
		if(s[i] == ' '||s[i] == '\n'){			//if whitespace put 't' in vector
			seperate.push_back(t);
			t = "";
		}
		else t += s[i];			//otherwise add character to 't'
	}
	return seperate;
}

int main()
try{
	cout << "enter words you want: ";
	string words;
	getline(cin, words);
	vector <string> result;			//split 'words' at each whitespace and add to result
	result = split(words);
	for(auto& w : result){       	
	cout << w << " ";
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
