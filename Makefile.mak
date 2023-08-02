all: Main.o 
	g++ Main.o -o program.exe
Main.o: Main.cpp
	g++ -c Main.cpp