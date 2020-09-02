#ifndef START_NODE_H
#define START_NODE_H

#include "node.h"

class DecisionNode : public Node
{
	public:
		DecisionNode (int end, int casino);
		~DecisionNode (void);
		int process (Player & player);

	private:
		DecisionNode (void);
		int end_;
		int casino_;
};

#endif
