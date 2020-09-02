version = -std=c++11

build: main.o player.o decisionNode.o endNode.o casinoNode.o slotsNode.o
	g++ $(version) main.o player.o decisionNode.o endNode.o casinoNode.o slotsNode.o -o game

main.o: main.cpp
	g++ -c main.cpp

player.o: player.h player.cpp
	g++ -c player.cpp

decisionNode.o: decisionNode.h decisionNode.cpp
	g++ -c decisionNode.cpp

endNode.o: endNode.h endNode.cpp
	g++ -c endNode.cpp

casinoNode.o: casinoNode.h casinoNode.cpp
	g++ -c casinoNode.cpp

slotsNode.o: slotsNode.h slotsNode.cpp
	g++ -c slotsNode.cpp

run: build
	./game

clean:
	rm -f game *.o

valgrind: build
	valgrind ./game
