#ifndef TWENTY_ONE_NODE_H
#define TWENTY_ONE_NODE_H

#include "node.h"

class TwentyOneNode : public Node
{
	public:
		TwentyOneNode (int current, int end, int casino, int cost);
		~TwentyOneNode (void);
		int process (Player & player);

	private:
		TwentyOneNode (void);
		
		int current_;
		int end_;
		int casino_;
		int cost_;
};

#endif
