#ifndef ROCK_PAPER_SCISSORS_NODE_H
#define ROCK_PAPER_SCISSORS_NODE_H

#include "node.h"

class RockPSNode : public Node
{
	public:
		RockPSNode (int current, int end, int casino, int cost, int multiplier);
		~RockPSNode (void);
		int process (Player & player);

	private:
		RockPSNode (void);
		
		int current_;
		int end_;
		int casino_;
		int cost_;
		int multiplier_;
};

#endif
