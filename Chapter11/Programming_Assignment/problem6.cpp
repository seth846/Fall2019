#include "std_lib_facilities.h"

int main()
try{
	string iname;
	cout << "enter name of file you want to use: ";
	cin >> iname;
	ifstream ifs(iname);
	if(!ifs) error("can't open file ", iname);
	vector <double> numbers;
	while(ifs){
		double number;
		ifs >> number;
		numbers.push_back(number);
	}
	string oname;
	cout << "what file would you like to output to: ";
	cin >> oname;
	ofstream ofs(oname);
	if(!ofs) error("can't open file ",oname);
	int i_pos = 0;
	for(int i = 0; i < numbers.size(); ++i){
		if(i_pos == 4){
			ofs << '\n';
			i_pos = 0;
		}
		ofs << scientific << setprecision(8) << setw(20) << numbers[i];
		++i_pos;
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
