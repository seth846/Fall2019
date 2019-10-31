#include "std_lib_facilities.h"

string reverse(string s){			//reverse the characters in a string
	vector <string> reverse;
	string reversed_w;
	for(int i = 0; i < s.size(); ++i){	//add each char in 's' to the front of 'reverse'
		reverse.push_front(s[i]);
	}
	for(int i = 0; i < reverse.size(); ++i){	//add each member of 'reverse' to 'reversed_w'
		reversed_w += reverse[i];
	}
	return reversed_w;
}

int main()
try{							//get input file
	string iname;
	cout << "what file do you want to use: ";
	cin >> iname;
	ifstream ifs(iname);				
	if(!ifs) error("can't open file ", iname);
	string word;
	while(ifs){					//get input
		ifs >> word;
		word += " ";
	}
	word = reverse(word);				//reverse 'word'
	ofstream ofs(iname);				//open output file
	if(!ofs) error("can't open file ", iname);
	ofs << word;					//output 'word'	
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
