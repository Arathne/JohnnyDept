#ifndef LEGAL_NODE_H
#define LEGAL_NODE_H

#include <node.h>

class LegalNode : public Node
{
	public:
		LegalNode (int current, int casino, int slots, int coinFlip, int twentyOne, int rockPS);
		~LegalNode (void);
		int process (Player & player);

	private:
		LegalNode (void);

		int current_;
		int casino_;
		int slots_;
		int coinFlip_;
		int twentyOne_;
		int rockPS_;
};

#endif
