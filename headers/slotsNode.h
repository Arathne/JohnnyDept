#ifndef SLOTS_NODE_H
#define SLOTS_NODE_H

#include "node.h"

class SlotsNode : public Node 
{
	public:
		SlotsNode (int current, int end, int legal, int maxRoll, int prize, int cost);
		~SlotsNode (void);
		int process (Player & player);

	private:
		SlotsNode (void);
		int play (void);

		int current_;
		int end_;
		int legal_;
		int maxRoll_;
		int prize_;
		int cost_;
};

#endif
