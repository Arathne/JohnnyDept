#ifndef SLOTS_NODE_H
#define SLOTS_NODE_H

#include "node.h"

class SlotsNode : public Node 
{
	public:
		SlotsNode (int casino);
		~SlotsNode (void);
		int process (Player & player);

	private:
		SlotsNode (void);
		int casino_;
};

#endif
