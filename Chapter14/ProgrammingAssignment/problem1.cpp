#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"
int pow(int base, int expo){
	int n = base;
	for(int i = 0; i < expo; ++i){
		n*=base;
	}
	return n;
}
class Binary_tree : Shape{
	public:
	Binary_tree(int levels);
	void draw_lines() const override;	
	private:
	int levels;
	Point p = {300,100};
	int d = 100;
};
Binary_tree::Binary_tree(int levels) : levels{levels}{
	add(p);
}
void Binary_tree::draw_lines() const{
	double x = point(0).x;
	double y = point(0).y;
	double theta = 7*3.14/6;
	double theta2 =11*3.14/6;
	int num_points = 2;
	fl_arc(x,y,10,10,0,360);
	cout << levels << endl;
	for(int i = 0; i < levels; i=i + 1){
		for(int n = 0; n < pow(num_points, i-1); ++n){
			double x_base = x+d*n;
			double y_base = y+d*i*sin(theta);
			fl_line(x,y_base, x_base+d*cos(theta), y_base-d*sin(theta));
	       		fl_line(x-d*n,y_base, x_base+d*cos(theta2), y_base-d*sin(theta2));
			cout << "n=" << n << " i= " << i << endl;
		}
	}			
}
int main(){
	using namespace Graph_lib;
	Point tl{100,100};
	Simple_window win{tl, 600, 400, "binary_tree"};
	Binary_tree bin{1};
	win.attach(bin);
	win.wait_for_button();
}
