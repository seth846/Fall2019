Notes on how to install FLTK on cygwin to work with Stroustrup PPPv2
***********************************************
Install on Cygwin
*************************
Install libfltk from cygwin installer

Install Xwin https://x.cygwin.com/docs/ug/cygwin-x-ug.pdf 	
	from installer select xorg-server, xinit, xorg-docs, xlaunch, openssh

Then follow the directions for linux starting from (2). 

**************************
Installing on Linux
**************************
1) Make sure fltk is installed via the package manager
	sudo apt install libfltk-1.3
	sudo apt install libfltk-1.3-dev

2) Compile Source Code for FLTK wrappers
	make

3) Install to location that can be see by compiler
	make install

** Note: If using Windows Linux Subsystem you will need to install Xming, and Run Xming
	once per terminal session. 


***********
Compiling
***********
Compile with programs with the flags
-lMyFLTK -lfltk -lfltk_image

See sample example and example Makefile

Be sure to include the header files


