/* Make sure you are on branch chapter12 before editing


Draw the five Olympic rings. Look online to find the correct colors.

*/
// Put your includes before std_lib_facilities
//

#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"



int main()
try{
	Point tl{100,100};
	Simple_window win{tl,1000,600,"Canvas"};	//create Simple window
	Circle ring1{Point{135,160},55};		//initialze and attach all circles
	win.attach(ring1);
	Circle ring2{Point{260,160}, 55};
	win.attach(ring2);
	Circle ring3{Point{385,160},55};
	win.attach(ring3);
	Circle ring4{Point{197,225},55};
	win.attach(ring4);
	Circle ring5{Point{323,225},55};
	win.attach(ring5);
	ring1.set_style(Line_style(Line_style::solid,10));	//set each circle's line thickness
	ring2.set_style(Line_style(Line_style::solid,10));
	ring3.set_style(Line_style(Line_style::solid,10));
	ring4.set_style(Line_style(Line_style::solid,10));
	ring5.set_style(Line_style(Line_style::solid,10));
	ring1.set_color(Color::cyan);				//set each circle's color
	ring2.set_color(Color::black);
	ring3.set_color(Color::red);
	ring4.set_color(Color::yellow);
	ring5.set_color(Color::green);
	win.wait_for_button();				//leave window open
}
catch(exception& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception, now exiting" << endl;
	return 2;}
