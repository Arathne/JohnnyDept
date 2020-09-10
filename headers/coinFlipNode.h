#ifndef COIN_FLIP_NODE_H
#define COIN_FLIP_NODE_H

#include "node.h"

class CoinFlipNode : public Node
{
	public:
		CoinFlipNode (int current, int end, int casino, int cost, int multiplier);
		~CoinFlipNode (void);
		int process (Player & player);

	private:
		CoinFlipNode (void);
		
		int current_;
		int end_;
		int casino_;
		int cost_;
		int multiplier_;
};

#endif
