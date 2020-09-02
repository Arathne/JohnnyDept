#include <iostream>

#include "player.h"
#include "decisionNode.h"
#include "endNode.h"
#include "casinoNode.h"
#include "slotsNode.h"

int main()
{
	int state_size = 2;
	int current_state = 1;

	Player player;

	Node* end = new EndNode();
	Node* decision = new DecisionNode (0, 2);
	Node* casino = new CasinoNode (1, 3);
	Node* slots = new SlotsNode (2);

	Node* states[] = {
		end,
		decision,
		casino,
		slots
	};

	while (current_state >= 0)
	{
		current_state = states[current_state]-> process(player);
	}
	
	for( int i = 0; i < state_size; i++ )
		delete states[i];
}
