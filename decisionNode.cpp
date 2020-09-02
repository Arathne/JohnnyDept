#include "decisionNode.h"

DecisionNode::DecisionNode (void) {}

DecisionNode::~DecisionNode (void) {}

int DecisionNode::process (void) 
{
	std::cout << "processing decision node!" << std::endl;
	return 1;
}
