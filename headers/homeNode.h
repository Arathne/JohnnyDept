#ifndef HOME_NODE_H
#define HOME_NODE_H

#include "node.h"

class HomeNode : public Node
{
	public:
		HomeNode (int current, int end, int casino);
		~HomeNode (void);
		int process (Player & player);

	private:
		HomeNode (void);

		int current_;
		int end_;
		int casino_;
};

#endif
