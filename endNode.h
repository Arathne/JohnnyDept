#ifndef END_NODE_H
#define END_NODE_H

#include "node.h"

class EndNode : public Node
{
	public:
		EndNode (void);
		~EndNode (void);
		int process (Player & player);
};

#endif
