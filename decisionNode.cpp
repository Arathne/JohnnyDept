#include "decisionNode.h"

DecisionNode::DecisionNode (int end, int casino):
	end_(end),
	casino_(casino)
{}

DecisionNode::~DecisionNode (void) {}

int DecisionNode::process (Player & player) 
{
	int state = end_;
	bool run = true;

	while (run)
	{
		std::cout << std::endl << "*>  YOU ARE AT A CROSSROAD  <*\n\n" 
		          << "1: go to the casino\n"
				  << "2: pay dept\n\n"
		          << "?: ";
		
		std::string answer;
		std::cin >> answer;

		if (answer == "1") {
			run = false;
			state = casino_;
		}
		else if (answer == "2") {
			run = false;
		}
	}
	
	return state;
}
