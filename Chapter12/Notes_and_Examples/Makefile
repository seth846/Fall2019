default:	Example

# Compile
Example.o:	example1.cpp
	g++ -c example1.cpp

# Link with installed FLTK library
Example:	Example.o
	g++ -o example1.out example1.o -lMyFLTK -lfltk -lfltk_images 
	@rm example1.o

# Or compile and link in one step
OneStep:	example1.cpp
	g++ -o example1.out example1.cpp -lMyFLTK -lfltk -lfltk_images 

clean:	
	@rm -f ./*.out ./*.o 

help:	
	@echo "Example:\t Compile example\n"
	@echo "OneStep:\t Compile example\n"
	@echo "clean:\t\t Remove all binary and object files\n"
	@echo "help:\t\t Display make options"
