#include "decisionNode.h"

DecisionNode::DecisionNode (int end):
	end_(end)
{}

DecisionNode::~DecisionNode (void) {}

int DecisionNode::process (void) 
{
	bool run = true;
	while (run)
	{
		std::cout << std::endl << "You are at a crossroad.\n" << "1: go to the casino\n\n" << "?: ";
		
		std::string answer;
		std::cin >> answer;

		if (answer == "1") {
			run = false;
		}
	}

	return end_;
}
