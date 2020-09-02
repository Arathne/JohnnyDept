#ifndef CASINO_NODE_H
#define CASINO_NODE_H

#include "node.h"

class CasinoNode : public Node
{
	public:
		CasinoNode (int crossroads, int slots);
		~CasinoNode (void);
		int process (Player & player);

	private:
		CasinoNode (void);
		int crossroads_;
		int slots_;
};

#endif
