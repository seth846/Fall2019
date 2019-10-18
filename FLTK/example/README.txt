****************************
Example FLTK program
****************************

This example gives a minimal usage of the FLTK wrappers provided for the PPPv2 book by Stroustrup.
Additionally, it gives a sample make file.

To comple, use either
	make
or
	make Example

To remove binary and object files use
	make clean


***********************
Debugging
***********************

If you get the error
	Can't open display: :0

If you are using Linux on Windows, then run Xming first
If you are using Cygwin, then you will need to run XWin Server and use the toolbar to open the cygwin terminal
If you are using linux, then use
	export Display=:0

If you get the error
	/usr/bin/ld: cannot find -lfltk
	collect2: error: ld returned 1 exit status

or with -lfltk replaced with something else, then you either do not have fltk installed properly or have make a 
typo in the linking flags. See ../README.txt
