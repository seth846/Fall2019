default:	Example

# Compile
Example.o:	SampleFLTK.cpp
	g++ -c SampleFLTK.cpp

# Link with installed FLTK library
Example:	Example.o
	g++ -o SampleFLTK.out SampleFLTK.o -lMyFLTK -lfltk -lfltk_images 
	@rm SampleFLTK.o

# Or compile and link in one step
OneStep:	SampleFLTK.cpp
	g++ -o SampleFLTK.out SampleFLTK.cpp -lMyFLTK -lfltk -lfltk_images 

clean:	
	@rm -f SampleFLTK.out SampleFLTK.o

help:	
	@echo "Example:\t Compile example\n"
	@echo "OneStep:\t Compile example\n"
	@echo "clean:\t\t Remove all binary and object files\n"
	@echo "help:\t\t Display make options"
