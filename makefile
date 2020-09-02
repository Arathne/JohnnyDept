version = -std=c++11

build: main.o player.o decisionNode.o
	g++ $(version) main.o player.o decisionNode.o -o game

main.o: main.cpp
	g++ -c main.cpp

player.o: player.h player.cpp
	g++ -c player.cpp

decisionNode.o: decisionNode.h decisionNode.cpp
	g++ -c decisionNode.cpp

run: build
	./game

clean:
	rm -f game *.o

valgrind: build
	valgrind ./game
