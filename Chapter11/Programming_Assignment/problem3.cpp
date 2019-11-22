#include "std_lib_facilities.h"

vector<string> split(const string& s, const string& w){		//split 's' at whitespace and all chars in 'w'
	vector <string> seperate;
	string t = "";
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == ' '){				//check if whitespace
			seperate.push_back(t);			
			t = "";					//clear 't'
		}
		else if(!isalnum(s[i])){			//check if alphanumeric
		       	for(int n = 0; n < w.size(); ++n){
				if(s[i] == w[n]){
					seperate.push_back(t);
					t = "";
				}
			}
		}
		else t += s[i];
	}
	return seperate;
}

int main()
try{
	cout << "enter words you want: ";
	string words;
	getline(cin, words);
	string whitespace;
	cout << "what is 'whitespace'(no whitespace in answer): ";
	cin >> whitespace;
	vector <string> result;
	result = split(words, whitespace);
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
