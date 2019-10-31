#include "std_lib_facilities.h"

vector <string> split(const string& s){			//split a string at whitespace
               vector <string> seperate;
	for(int i = 0; i < s.size(); ++i){		
        	string t;
		if(s[i] == ' '){			//check for whitespace
			seperate.push_back(t);		//push back 't'
			t = "";				//clear 't'
		}	
        	else t += s[i];				//otherwise add non-whitespace character to 't'
        }
        return seperate;
}
string reverse(string s){		//reverse the order of words in a string
	vector <string> reverse;
	string reversed_w;
	reverse = split(s);				//split 's' at whitespace
	for(int i = 0; i < reverse.size(); ++i){
		reverse.push_front(reverse[i]);		//swap the order of all words in 'reverse'
	}
	for(int i = 0; i < reverse.size(); ++i){	//add each element in 'reverse' to 'reversed_w'
		reversed_w += reverse[i];
	}
	return reversed_w;
}

int main()
try{
	string iname;					//get input file
	cout << "what file do you want to use: ";
	cin >> iname;
	ifstream ifs(iname);
	if(!ifs) error("can't open file ", iname);
	string word;					//get input
	while(ifs){
		ifs >> word;
		word += " ";
	}			
	word = reverse(word);				//reverse 'word'
	ofstream ofs(iname);				//output 'word'
	if(!ofs) error("can't open file ", iname);
	ofs << word;
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
