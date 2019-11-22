/* Make sure you are on branch chapter12 before editing


Draw a 3-by-3 tic-tac-toe board of alternating white and red squares. Add black lines between the squares. 

*/
// Put your includes before std_lib_facilities
//

#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

bool is_even(int i){
	if(i % 2 == 0) return true;
	else return false;
}


int main()
try{
	using namespace Graph_lib;
	Point tl = {100,100};			//set point top left
	Simple_window win{tl,600,400,"canvas"};		//create a Simple window
	int sqy = 50;					//initialize location variables
	int sqx = 50;
	/*for(int i = 0; i < 9; ++i){			//this section was my original attempt it worked
		if(i == 3 || i == 6 || i == 9){         //but each square would be deleted after each iteration 
			sqx -= 100;			//because each time i redefine the same shape
			sqy += 50;
		}
		else sqx += 50;
		Rectangle square{Point{sqx,sqy},50,50};
		if(is_even(i)) square.set_fill_color(Color::white);
		else square.set_fill_color(Color::red);
		win.attach(square);
		win.wait_for_button();
	}
*/
	Rectangle sq1{Point{sqx,sqy},50,50};		//initialize every square
	sqx += 50;
	Rectangle sq2{Point{sqx,sqy},50,50};
	sqx += 50;
	Rectangle sq3{Point{sqx,sqy},50,50};
	sqx -= 100;
	sqy += 50;
	Rectangle sq4{Point{sqx,sqy},50,50};
	sqx += 50;
	Rectangle sq5{Point{sqx,sqy},50,50};
	sqx += 50;
	Rectangle sq6{Point{sqx,sqy},50,50};
	sqx -= 100;
	sqy += 50;
	Rectangle sq7{Point{sqx,sqy},50,50};
	sqx += 50;
	Rectangle sq8{Point{sqx,sqy},50,50};
	sqx += 50;
	Rectangle sq9{Point{sqx,sqy},50,50};
	sq1.set_fill_color(Color::white);		//set each square's color
	sq2.set_fill_color(Color::red);
	sq3.set_fill_color(Color::white);
	sq4.set_fill_color(Color::red);
	sq5.set_fill_color(Color::white);
	sq6.set_fill_color(Color::red);
	sq7.set_fill_color(Color::white);
	sq8.set_fill_color(Color::red);
	sq9.set_fill_color(Color::white);
	win.attach(sq1);				//attach all
	win.attach(sq2);
	win.attach(sq3);
	win.attach(sq4);
	win.attach(sq5);
	win.attach(sq6);
	win.attach(sq7);
	win.attach(sq8);
	win.attach(sq9);
	win.wait_for_button();				//leave window open
}
catch(exception& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception, now exiting" << endl;
	return 2;
}
