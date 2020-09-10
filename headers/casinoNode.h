#ifndef CASINO_NODE_H
#define CASINO_NODE_H

#include "node.h"

class CasinoNode : public Node
{
	public:
		CasinoNode (int current, int home, int legal, int illegal);
		~CasinoNode (void);
		int process (Player & player);

	private:
		CasinoNode (void);
		
		int current_;
		int home_;
		int illegal_;
		int legal_;
};

#endif
