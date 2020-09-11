# Johnny Dept

## Description
#### a game where you are in a huge amount of dept and need to find a way to pay it

## Linux
#### cmake -S . -B build
#### cd build && make && clear && ./game

## Windows
#### use cmake-gui tool on windows which will compile and run on visual studio

## Structure
#### cpp files for nodes are in the 'nodes' folder and header files are in the 'headers' folder because cmake prefers all the header files in a single directory or else it could cause problems during compilation.

## How it works
#### uses polymorphism to store nodes into an array and then traverses based on indices

## Decisions
#### I decided to use cmake because there was a point where my makefile was extremely long and becoming difficult to manage. So, I changed it to cmake early on which also has the advantage of compiling on all 3 major platforms.
#### I mainly followed the python example provided. Other than the language, the main difference will be that a player object is passed into each node. It was intended to have cash and inventory, but I realized an inventory would be a lot of work
#### the main reason I chose c++ was to pass in a player object using pass by reference rather than pass by value. It's just a lot easier to manage that way

## Lessons Learned
#### one of the things I would change is the main.cpp file. Most of the code in that file is including files and creating the classes which obscures the important code which is the array and the while loop. The way I would fix this is by using a stack/vector of Nodes (polymorphic). Then, each node will return a object to the next node. For backtracking, it would just pop items from the stack.
#### Not difficult, but really tedious to do a text based game in c++. Twine would have been much much faster
