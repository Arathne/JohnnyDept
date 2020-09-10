#ifndef ILLEGAL_ENTRANCE_NODE_H
#define ILLEGAL_ENTRANCE_NODE_H

#include <node.h>

class IllegalEntranceNode : public Node
{
	public:
		IllegalEntranceNode (int illegal, int casino);
		~IllegalEntranceNode (void);
		int process (Player & player);

	private:
		IllegalEntranceNode (void);

		int illegal_;
		int casino_;
		bool payed_;
};

#endif
