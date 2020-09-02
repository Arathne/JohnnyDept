#include <iostream>

#include "player.h"
#include "decisionNode.h"
#include "endNode.h"

int main()
{
	int state_size = 2;
	int current_state = 0;

	Node* decision = new DecisionNode(1);
	Node* end = new EndNode("kidnapped and sold into slavery");
	
	Node* states[] = {
		decision,
		end
	};

	while (current_state >= 0)
	{
		current_state = states[current_state]-> process();
	}
	
	for( int i = 0; i < state_size; i++ )
		delete states[i];
}
