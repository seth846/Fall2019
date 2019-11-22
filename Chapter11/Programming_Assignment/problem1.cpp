#include "std_lib_facilities.h"
bool isvowel(char c){
	        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
		        else return false;
}
int main()
try{
	vector <string> file;
	cout << "enter name of input file: ";
	string iname;
	cin >> iname;
	ifstream ifs(iname);
	if(!ifs) error("can't open file ", iname);
	for(string word; ifs >> word;){
		file.push_back(word);
	}
	ostringstream output{};
	for(string& word : file){
		for(char c : word){
			if(!isvowel(c)) output << c;
		}
		output << " ";
	}
	ofstream ofs(iname);
	ofs << output.str();
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
