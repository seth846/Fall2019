/* Make sure you are on branch chapter12 before editing


What happens when you draw a shape that doesn't fit inside its window?
What happens when you draw a Window that doesn't fit on your screen?
Write a sample code and leave your answer as a comment at the top.

*/
// Put your includes before std_lib_facilities
//

//the shape just continues outside the window
//the window gets condensed to fit the screen size and the next button gets squished

#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"



int main()
try{
	Point tl{100,100};
	Simple_window win{tl, 1800, 1800,"Canvas"};
	Polygon poly;
	poly.add(Point{50,50});
	poly.add(Point{100,100});
	poly.add(Point{1000,500});
	win.attach(poly);
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
