version = -std=c++11

build: main.o
	g++ $(version) main.o -o game

main.o: main.cpp
	g++ -c $(version)  main.cpp

run: build
	./game

clean:
	rm -f game *.o
