#include "decisionNode.h"

DecisionNode::DecisionNode (int end):
	end_(end)
{}

DecisionNode::~DecisionNode (void) {}

int DecisionNode::process (Player & player) 
{
	bool run = true;
	while (run)
	{
		std::cout << std::endl << "*>  YOU ARE AT A CROSSROAD  <*\n\n" << "1: go to the casino\n\n" << "?: ";
		
		std::string answer;
		std::cin >> answer;

		if (answer == "1") {
			run = false;
		}
	}
	
	return end_;
}
