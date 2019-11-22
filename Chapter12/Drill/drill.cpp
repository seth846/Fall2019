#include "Simple_window.h"
#include "Graph.h"

/*
 *	MAKE SURE YOU ARE ON THE chapter12 BRANCH BEFORE EDITING
 */

int main(){

	using namespace Graph_lib;
	
	// 12.7.2
	Point top_left{100, 100};
        int width = 600;
	int height = 400;
	string title = "Canvas";

	Simple_window win{top_left, width, height, title};
	Polygon poly;

	poly.add(Point{300, 200});
	poly.add(Point{350, 100});
	poly.add(Point{400, 200});

	poly.set_color(Color::red);
	win.attach(poly);

	win.wait_for_button();

	// 12.7.3 (a)
	Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};

	win.attach(xa);
	win.set_label("Canval #2");
	win.wait_for_button();

	Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
	ya.set_color(Color::cyan);

	win.attach(ya);
	win.set_label("Canval #3");
	win.wait_for_button();
	
	// 12.7.4
	double a = 0, b = 100;
	top_left = Point{20, 150};
	int Npts = 1000;
       	double	xscale = 50, yscale = 50;

	Function sine{sin, a, b, top_left, Npts, xscale, yscale};

	win.attach(sine);
	win.set_label("Canvas #4");
	win.wait_for_button();
	
	// 12.7.5
	Polygon poly2;
	poly2.add(Point{300,200});
	poly2.add(Point{350,100});
	poly2.add(Point{400,200});
	poly2.set_color(Color::red);
	poly2.set_style(Line_style::dash);
	win.attach(poly2);
	win.set_label("Canvas #5");
	win.wait_for_button();
	
	//12.7.6
	Rectangle r {Point{200,200}, 100, 50};
	win.attach(r);
	win.set_label("Canvas #6");
	
	Closed_polyline poly_rect;
	poly_rect.add(Point{100,50});
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{100,100});
	poly_rect.add(Point{50,75});
	win.attach(poly_rect);
	win.wait_for_button();
	
	//12.7.7
	r.set_fill_color(Color::yellow);
	poly.set_style(Line_style(Line_style::dash,4));
	poly_rect.set_style(Line_style(Line_style::dash,2));
	poly_rect.set_fill_color(Color::green);
	win.set_label("Canvas #7");
	win.wait_for_button();
	
	//12.7.8
	Text t {Point{150,150}, "Hello, graphical world!"};
	win.attach(t);
	win.set_label("Canvas #8");
	win.wait_for_button();
	t.set_font(Graph_lib::Font::times_bold);
	t.set_font_size(20);
	win.set_label("Canvas #9");
	win.wait_for_button();
	
	//12.7.9
	Image ii {Point{100,50},"download.jpg"};
	win.attach(ii);
	win.set_label("Canvas #10");	
	win.wait_for_button();
	
	ii.move(100,200);
	win.set_label("Canvas #12");
	win.wait_for_button();
	//12.7.10
	Circle c {Point{100,200},50};
	Ellipse e {Point{100,200},75,25};
	e.set_color(Color::dark_red);
	Mark m {Point{100,200},'x'};
	
	ostringstream oss;
	oss << "sreen size: " << x_max() << "*" << y_max()
		<< "; window size: " << win.x_max() << "*" << win.y_max();
	Text sizes {Point{40,40},oss.str()};
	
	Image cal{Point{225,225},"downloed2.jpg"};
	cal.set_mask(Point{40,40},200,150);

	win.attach(c);
	win.attach(m);
	win.attach(e);
	win.attach(sizes);
	win.attach(cal);
	win.set_label("Canvas #12");
	win.wait_for_button();

	return 0;
}
