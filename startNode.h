#ifndef START_NODE_H
#define START_NODE_H

#include "node.h"

class StartNode : public Node
{
	public:
		StartNode (void);
		~StartNode (void);

		int process (void);	
};

#endif
