#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"

struct Regular_hexagon : Shape{
	Regular_hexagon(Point c,int dd);
	void draw_lines() const override;
	int dist() const { return d; };
	private:
	int c;
	int d;
};
Regular_hexagon::Regular_hexagon(Point c, int d): d{d}{
	add(c);
}
void Regular_hexagon::draw_lines() const{
	fl_line(point(0).x+(d/2),point(0).y-d,point(0).x-(d/2),point(0).y-d);
	fl_line(point(0).x-(d/2),point(0).y-d,point(0).x-d,point(0).y);
	fl_line(point(0).x-d,point(0).y,point(0).x-(d/2),point(0).y+d);
	fl_line(point(0).x-(d/2),point(0).y+d,point(0).x+(d/2),point(0).y+d);
	fl_line(point(0).x+(d/2),point(0).y+d,point(0).x+d,point(0).y);

}
int main(){
	using namespace Graph_lib;
	Point tl{100,100};
	Simple_window win{tl, 600, 800, "window"};
	Regular_hexagon hex{Point{100,100}, 50};
	win.attach(hex);
	win.wait_for_button();
}
