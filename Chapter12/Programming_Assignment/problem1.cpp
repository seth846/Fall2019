/* Make sure you are on branch chapter12 before editing

Draw a rectangle as a Rectangle and as a Polygon. Make the lines of the Polygon red and the lines of the Rectangle blue. Wait for the "next" button to be pressed. Then draw a 100-by-30 Rectangle and place the text "Howdy!" inside it.

*/
// Put your includes before std_lib_facilities
//

#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"



int main()
try{
	using namespace Graph_lib;

	Point tl(100, 100);				

	Simple_window win{tl,600, 400, "Canvas"};	//create a Simple window

	Polygon R;			//make first rectangle as a Polygon

	R.add(Point{250,50});
	R.add(Point{250,100});
	R.add(Point{450,100});
	R.add(Point{450,50});
	
	R.set_color(Color::red);

		win.attach(R);
	
	Rectangle rect{Point{250, 150},200,50};		//make second rectangle as a Rectangle
	
	rect.set_color(Color::blue);
	
	win.attach(rect);
	win.wait_for_button();
	
	Rectangle rect2{Point{250, 250},100,30};	//make third rectangle
	rect2.set_color(Color::green);
	win.attach(rect2);

	Text t{Point{275, 275}, "Howdy!"};		//add text
	t.set_color(Color::green);
	win.attach(t);
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
