#include <endNode.h>

EndNode::EndNode (void) {}

EndNode::~EndNode (void) {}

int EndNode::process (Player & player) 
{
	std::cout << "\n*>  GAME OVER  <*"
	          << "\n*>  CASH: " << player.cash() << "  <*\n"
	          << "\n*>  kidnapped and sold into slavery  <*\n" << std::endl;
	
	return -1;
}
