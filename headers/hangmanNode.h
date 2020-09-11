#ifndef HORSE_RACE_NODE_H
#define HORSE_RACE_NODE_H

#include "node.h"

class HorseRaceNode : public Node
{
	public:
		HorseRaceNode (int current, int end, int casino, int cost, int multiplier);
		~HorseRaceNode (void);
		int process (Player & player);

	private:
		HorseRaceNode (void);

		int current_;
		int end_;
		int casino_;
		int cost_;
		int multiplier_;
};

#endif
