#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "player.h"

class Node
{
	public:
		virtual ~Node (void) {};
		virtual int process (Player & player) = 0;
};

#endif
