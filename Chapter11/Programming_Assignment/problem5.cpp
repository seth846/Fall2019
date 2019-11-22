#include "std_lib_facilities.h"

vector <string> split(const string& s){			//split a string at whitespace
	vector <string> seperate;
	string t = "";
	for(char c : s){		
        	if(c == ' '){			//check for whitespace
			seperate.push_back(t);		//push back 't'
			t = "";				//clear 't'
		}	
        	else t += c;				//otherwise add non-whitespace character to 't'
        }
        return seperate;
}
string reverse(string s){		//reverse the order of words in a string
	vector <string> reverse;
	ostringstream reversed_w {""};
	reverse = split(s);				//split 's' at whitespace
	for(int i = reverse.size()-1; i>=0;  --i){
		reversed_w << reverse[i] << " ";		//swap the order of all words in 'reverse'
	}
	return reversed_w.str();
}

int main()
try{
	string iname;					//get input file
	cout << "what file do you want to use: ";
	cin >> iname;
	ifstream ifs(iname);
	if(!ifs) error("can't open file ", iname);
	ostringstream oss{""};
	for(string input; ifs >> input;){
		oss << input << " ";
	}			
	string word = reverse(oss.str());	//reverse 'word'
	ifs.close();
	ofstream ofs(iname);				//output 'word'
	if(!ofs) error("can't open file ", iname);
	for(char c : word){
		ofs << c;
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
