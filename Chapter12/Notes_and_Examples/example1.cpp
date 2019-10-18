#include "Simple_window.h"
#include "Graph.h"

int main(){

	using namespace Graph_lib;

	Point top_left{100, 100};
        int width = 600;
	int height = 400;
	string title = "Canvas";

	Simple_window win{top_left, width, height, title};
/*
	Polygon poly;

	poly.add(Point{300, 200});
	poly.add(Point{350, 100});
	poly.add(Point{400, 200});

	poly.set_color(Color::red);
*/
	win.attach(poly);

	win.wait_for_button();

	// 12.7.3
/*
	Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};

	win.attach(xa);
	win.set_label("Canval #2");
	win.wait_for_button();

	Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
	ya.set_color(Color::cyan);

	win.attach(ya);
	win.set_label("Canval #3");
	win.wait_for_button();
*/
	// 12.7.4
/*
	double a = 0, b = 100;
	top_left = Point{20, 150};
	int Npts = 1000;
       	double	xscale = 50, yscale = 50;

	Function sine{sin, a, b, top_left, Npts, xscale, yscale};

	win.attach(sine);
	win.set_label("Canvas #4");
	win.wait_for_button();

*/
	return 0;
}
