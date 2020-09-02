#include "endNode.h"

EndNode::EndNode (std::string msg):
	msg_(msg)
{}

EndNode::~EndNode (void) {}

int EndNode::process (void) 
{
	std::cout << "\n====== GAME OVER ========\n\n" << msg_ << std::endl;
	return -1;
}
