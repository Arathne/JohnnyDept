#include "endNode.h"

EndNode::EndNode (std::string msg):
	msg_(msg)
{}

EndNode::~EndNode (void) {}

int EndNode::process (Player & player) 
{
	std::cout << "\n*>  GAME OVER  <*"
	          << "\n*>  CASH: " << player.cash() << "  <*\n"
	          << "\n*>  " << msg_ << "  <*\n" << std::endl;
	
	return -1;
}
