#ifndef ILLEGAL_NODE_H
#define ILLEGAL_NODE_H

#include <node.h>

class IllegalNode : public Node
{
	public:
		IllegalNode (int current, int casino, int slots);
		~IllegalNode (void);
		int process (Player & player);

	private:
		IllegalNode (void);

		int current_;
		int casino_;
		int slots_;
};

#endif
