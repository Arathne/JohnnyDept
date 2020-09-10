#ifndef FIGHT_CLUB_NODE_H
#define FIGHT_CLUB_NODE_H

#include "node.h"

class FightClubNode : public Node
{
	public:
		FightClubNode (int current, int end, int casino, int cost, int multiplier);
		~FightClubNode (void);
		int process (Player & player);

	private:
		FightClubNode (void);

		int current_;
		int end_;
		int casino_;
		int cost_;
		int multiplier_;
};

#endif
