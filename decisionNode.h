#ifndef START_NODE_H
#define START_NODE_H

#include "node.h"

class DecisionNode : public Node
{
	public:
		DecisionNode (int end);
		~DecisionNode (void);

		int process (void);

	private:
		DecisionNode (void);
		
		int end_;
};

#endif
