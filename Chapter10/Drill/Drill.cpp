#include "std_lib_facilities.h"
struct Point{	
	int x;
	int y;
};                  // define Point
int main()
try{
	int x;
	int y;
	vector <Point> original_point;	
	cout << "enter 7 (x, y) points: ";
	while(original_point.size() <= 6){    //input points into original_points until it has 7 inputs  
		cin >> x >> y;
		original_point.push_back(Point{x,y});
	}
	cout << "enter the name of the file you want to use: ";
        string iname;
	cin >> iname;						// recieve name of file to be used
	ofstream ost{iname};
  	if(!ost) error("can't open mydata.txt");	
	for(int i = 0; i <= original_point.size();++i){
		ost << original_point[i].x << original_point[i].y <<'\n'; //output data to file
	}										
	ifstream ist{iname};
	if(!ist)error("can't open input file mydata.txt");  
	vector <Point> processed_points;
	while(ist >> x >> y){
		processed_points.push_back(Point{x,y});		// put file data into processed points		
	}
	for(int i = 0; i < original_point.size(); ++i){
		if(original_point.size() != processed_points.size()) error("vectors have different lengths");
		if(original_point[i].x != processed_points[i].x || original_point[i].y != processed_points[i].y){
				error("data elements do not match");  // check if vectors are equivalent
			}
		cout << '(' << original_point[i].x << ',' << original_point[i].y << ")\t" 
		     << '(' << processed_points[i].x << ',' << processed_points[i].y << ")\n";
	}							// print the results of both vectors
}
catch(exception& e){
	cerr << e.what() << endl;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
}
