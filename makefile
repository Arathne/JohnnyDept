version = -std=c++11

build: main.o player.o startNode.o
	g++ $(version) main.o player.o startNode.o -o game

main.o: main.cpp
	g++ -c main.cpp

player.o: player.h player.cpp
	g++ -c player.cpp

startNode.o: startNode.h startNode.cpp
	g++ -c startNode.cpp

run: build
	./game

clean:
	rm -f game *.o

valgrind: build
	valgrind ./game
