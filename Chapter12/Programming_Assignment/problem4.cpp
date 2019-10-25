/* Make sure you are on branch chapter12 before editing


What happens when you draw a shape that doesn't fit inside its window?
What happens when you draw a Window that doesn't fit on your screen?
Write a sample code and leave your answer as a comment at the top.

*/
// Put your includes before std_lib_facilities
//


#include "std_lib_facilities.h"



int main()
try{

}
catch(exception& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Error: Unknown Exception, now exiting" << endl;
	return 2;
}
