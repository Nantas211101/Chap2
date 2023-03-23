build: compile
	g++ ./obj/*.o -o ./Release/chap2 -L "D:\SFML-2.5.1\lib" -lsfml-graphics -lsfml-window -lsfml-system
compile: 
	g++ -c ./src/cal.cpp -o ./obj/cal.o -I "D:\SFML-2.5.1\include"
	g++ -c ./src/test1.cpp -o ./obj/test1.o -I "D:\SFML-2.5.1\include"