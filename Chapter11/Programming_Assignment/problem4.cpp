#include "std_lib_facilities.h"
#include <sstream>
string reverse(string s){			//reverse the characters in a string
	ostringstream reversed_w {""};
	for(int i = s.size() - 1; i >= 0; --i){	//add each char in 's' to the front of 'reverse'
		reversed_w << s[i];
	}
	return reversed_w.str();
}

int main()
try{							//get input file
	string iname;
	cout << "what file do you want to use: ";
	cin >> iname;
	ifstream ifs(iname);				
	if(!ifs) error("can't open file ", iname);
	ostringstream word{""};
	for(string input; ifs >> input;){		//get input
		word << input << " ";
	}
	ofstream ofs(iname);				//open output file
	if(!ofs) error("can't open file ", iname);
	ofs << reverse(word.str());					//output 'word'	
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
