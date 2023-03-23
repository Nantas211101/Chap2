build: compile
	g++ ./obj/*.o -o ./Release/chap2 -L "D:\SFML-2.5.1\lib" -lsfml-graphics -lsfml-window -lsfml-system
compile: 
# cách t dùng khi không có folder riêng là
# g++ -c *.cpp -I "D:\SFML-2.5.1\include
# ở dưới là cách trên mạng chỉ (nó kêu làm từng cái một)
	g++ -c ./src/main.cpp -o ./obj/main.o -I "D:\SFML-2.5.1\include"
	g++ -c ./src/test1.cpp -o ./obj/test1.o -I "D:\SFML-2.5.1\include"

