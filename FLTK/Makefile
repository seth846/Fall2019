CC = gcc
CFLAGS = 

INCLUDE = ./include
SRC = ./src

INSTALL_PATH = /usr/local
LIB_PATH = $(INSTALL_PATH)/lib
INCLUDE_PATH = $(INSTALL_PATH)/include/FLTK


default:	MyFLTK

Graph.o:	$(SRC)/Graph.cpp $(INCLUDE)/*
	$(CC) $(CFLAGS) -c -I$(INCLUDE) $(SRC)/Graph.cpp -o Graph.o 

GUI.o:	$(SRC)/GUI.cpp $(INCLUDE)/*
	$(CC) $(CFLAGS) -c -I$(INCLUDE) $(SRC)/GUI.cpp -o GUI.o 

Window.o:	$(SRC)/Window.cpp $(INCLUDE)/*
	$(CC) $(CFLAGS) -c -I$(INCLUDE) $(SRC)/Window.cpp -o Window.o 
	
MyFLTK:	Graph.o GUI.o Window.o
	ar rsc libMyFLTK.a ./*.o 
	
install: libMyFLTK.a 
	mkdir -p $(INCLUDE_PATH)
	mkdir -p $(LIB_PATH)
	mv libMyFLTK.a $(LIB_PATH)
	cp $(INCLUDE)/* $(INCLUDE_PATH)
	rm *.o

uninstall: 
	rm -f $(LIB_PATH)/libMyFLTK.a
	rm -rf $(INCLUDE_PATH)
	echo 'export LIBRARY_PATH=/usr/local/lib:$LIBRARY_PATH' >> ~/.bash_profile
	. ~/.bash_profile
	. ~/.profile
