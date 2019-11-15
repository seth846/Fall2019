#include "Simple_window.h"
#include "Graph.h"
#include "std_lib_facilities.h"
/*
 *	MAKE SURE YOU ARE ON THE chapter13 BRANCH BEFORE EDITING
 */

int main(){

	using namespace Graph_lib;
	Point tl{100,100};
	Simple_window win{tl,800,1000,"drill"};			//create window
	Vector_ref <Rectangle> rect;				//initialize
	Vector_ref <Image> image;		
	int x = 0;
	int n = 0;
	for(int i = 0; i < 8; ++i){				//create loop for squares
		for(int j = 0; j < 8; ++j){
			rect.push_back(new Rectangle{Point{x*100,j*100}, 100, 100});	       //add each square to rect
			if(n%9 == 0 || n == 0) rect[rect.size()-1].set_fill_color(Color::red);//set the color of proper squares
			win.attach(rect[rect.size()-1]);			//attach previously created square
			++n;	
		}
		++x;	
	}
	n = 0;
	for(int i = 0; i<3;++i){						
		image.push_back(new Image{Point{(n+2)*100,0},"image.jpg"});	//create images
		win.attach(image[image.size()-1]);				//attach images
		n += 2;
	}
	x = 1;
	Image ii{Point{0,0},"image2.jpg"};	//create second image
	win.attach(ii);				//attach second image
	win.wait_for_button();
	for(int i = 0; i < 8; ++i){
		for(int j = 0; j < 8; ++j){
			ii.move(100,0);		//move image
			if(x % 8 == 0);
			else win.wait_for_button();
			++x;

		}
	if(x < 64) ii.move(-800,100);		//move image to bginning of next line
	win.wait_for_button();
	}
	

	return 0;
}
