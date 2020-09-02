#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

class Node
{
	public:
		virtual ~Node (void) {};
		virtual int process (void) = 0;
};

#endif
