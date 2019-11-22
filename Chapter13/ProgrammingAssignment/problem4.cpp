#include "Graph.h"
#include "Simple_window.h"
#include "std_lib_facilities.h"

struct Regular_triangle : Polygon{
	Regular_triangle(Point t, Point br, Point bl);
	void draw_lines() const override;
	private:
	Point t;
	Point br;
	Point bl;
};
Polygon::Regular_triangle{Point t, Point br, bl}{
	if((t.x-br.x)^2+(t.y-br.y)^2 != (t.x-bl.x)^2 + (t.y-bl.y)){
	       	error("can't draw trangle");
	}
	add(t);
	add(br);
	add(bl);
}
void draw_lines() {
	Polygon::add(t);
	Polygon::add(br);
	Polygon::add(bl);
}

int main(){
	Point tl{100,100};
	Simple_window win{tl,800,600, "canvas"};
	Regular_triangle tri{Point{50,50},Point{25,100},Point{75,100}};
	win.attach(tri);
	win.wait_for_button();

}
