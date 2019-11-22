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
Regular_triangle{Point t, Point br, bl}{
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
	Vector_ref <Regular_triangle> triangles;
	for(int i = 0; i < 8; ++i){
		for(int n = 0; n < 8; ++n){
			triangles.push_back(new Regular_triangle{Point{n*10,i*10},Point{(n*10)-5,(i+1)*10},Point{(n*10)+5,(i-1)*10}});
			win.attach(triangles[triangles.size()-1]);
		}
	}	
	win.wait_for_button();

}

