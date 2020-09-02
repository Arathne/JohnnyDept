#include "slotsNode.h"

SlotsNode::SlotsNode (int casino):
	casino_(casino)
{}

SlotsNode::~SlotsNode (void) {}

int SlotsNode::process (Player & player)
{
	std::cout << "slots!" << std::endl;
	return casino_;
}
