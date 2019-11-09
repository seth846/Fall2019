/* Make sure you are on branch chapter12 before editing

Draw a red 1/4-inch frame around a rectangle that is three-quarters the height of your screen an dtwo thirds the width.

*/

// Put your includes before std_lib_facilities
//

#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"



int main()
try{
	using namespace Graph_lib;
	Point tl {0, 0};
	Simple_window win {tl,1200,800,"Canvas"};		//create Simple window
	Rectangle rect {Point{1200/6, 800/8}, 1200/4*3, 800/3*2};	//create Rectangle
	rect.set_style(Line_style(Line_style::solid,25));	//set line thickness
	rect.set_color(Color::red);				//set line color
	win.attach(rect);
	win.wait_for_button();
}
catch(exception& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception, now exiting" << endl;
	return 2;
}
