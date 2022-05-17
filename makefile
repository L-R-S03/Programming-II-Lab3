a.exe: Shape.o Rectangle.o Circle.o main.o 
	g++ Shape.o Rectangle.o Circle.o main.o -o a.exe
	 
Shape.o: Shape.h Shape.cpp
	g++ -c -g Shape.cpp 

Rectangle.o: Shape.h Rectangle.h Rectangle.cpp 
	g++ -c -g Rectangle.cpp 

Circle.o: Shape.h Circle.h Circle.cpp 
	g++ -c -g Circle.cpp 

main.o: Shape.h Rectangle.h Circle.h main.cpp 
	g++ -c -g main.cpp 
