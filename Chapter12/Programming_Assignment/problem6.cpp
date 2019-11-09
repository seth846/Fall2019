/* Make sure you are on branch chapter12 before editing


Display an image on the screen. Give the image a title on the window and a caption below the image in the window.

*/
// Put your includes before std_lib_facilities
//

#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"



int main(){
	Point tl{100,100};
	Simple_window win{tl,1000,1000,"image 1"};
	Image ii{Point{0,0},"image.jpg"};
	Text t{Point{5,815},"image 1"};
	ii.set_mask(Point{0,0},800,800);
	win.attach(ii);
	win.attach(t);
	win.wait_for_button();
}

	
