#include "std_lib_facilities.h"

vector<string> split(const string& s, const string& w){		//split 's' at whitespace and all chars in 'w'
	vector <string> seperate;
	for(int i = 0; i < s.size(); ++i){
		string t;
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
	cout << "enter words you want(0 terminates): ";
	string words;
	while(cin){
		string w;
		cin >> w;
		if(w == "0") break;
		words += w;
		words += " ";
	}
	string whitespace;
	cout << "what is 'whitespace'(no whitespace in answer): ";
	cin >> whitespace;
	vector <string> result;
	result = split(words, whitespace);
	for(int i = 0; i < result.size(); ++i){ cout << result[i];}
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
