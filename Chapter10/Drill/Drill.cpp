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
	
	//input points into original_points until it has 7 inputs  	
	cout << "enter 7 (x, y) points: ";
	while(original_point.size() < 7){    
		cin >> x >> y;
		original_point.push_back(Point{x,y});
	}
	
	// recieve name of file to be used
	cout << "enter the name of the file you want to use: ";
        string iname;
	cin >> iname;						


	ofstream ost{iname};
  	if(!ost) error("can't open mydata.txt");	

	//output data to file
	for(int i = 0; i < original_point.size();++i){
		ost << original_point[i].x << ' ' << original_point[i].y <<'\n'; 
	}
	ost.close();	

	ifstream ist{iname};
	if(!ist)error("can't open input file mydata.txt");  

	// put file data into processed points		
	vector <Point> processed_points;
	while(ist >> x >> y){
		processed_points.push_back(Point{x,y});		
	}

	// check if vectors are equivalent
	if(original_point.size() != processed_points.size()) 
		error("vectors have different lengths");

	for(int i = 0; i < original_point.size(); ++i){

		if(original_point[i].x != processed_points[i].x || original_point[i].y != processed_points[i].y){
				error("data elements do not match");  
			}

		// print the results of both vectors
		cout << '(' << original_point[i].x << ',' << original_point[i].y << ")\t" 
		     << '(' << processed_points[i].x << ',' << processed_points[i].y << ")\n";
	}					
}
catch(exception& e){
	cerr << e.what() << endl;
}
catch(...){
	cerr << "Error: Unknown Exception!" << endl;
}
