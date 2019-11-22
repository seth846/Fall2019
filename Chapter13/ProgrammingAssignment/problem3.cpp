#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"

int main(){
	Point tl{100,100};
	Simple_window win{tl, 400, 600, "marked_circle"};
	Circle mc{Point{150,150}, 25};
	Mark m{Point{150,125},'x'};
	win.attach(mc);
	win.attach(m);
	win.wait_for_button();
	int x = 0;
	int y = 0;
	for(int i = 0; i < 8; ++i){
		m.move(x-25,y+25);
		win.wait_for_button();
		m.move(x+25,y+25);
		win.wait_for_button();
		m.move(x+25,y-25);
		win.wait_for_button();
		m.move(x-25,y-25);
		win.wait_for_button();
	}
}
