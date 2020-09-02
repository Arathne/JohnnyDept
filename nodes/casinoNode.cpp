#include <casinoNode.h>

CasinoNode::CasinoNode (int crossroads, int slots):
	crossroads_(crossroads),
	slots_(slots)
{}

CasinoNode::~CasinoNode (void) {}

int CasinoNode::process (Player & player)
{
	int state = crossroads_;
	bool run = true;

	while (run)
	{
		std::cout << std::endl << "*>  YOU ENTER A CASINO  <*\n" 
		          << "*>  WHAT WILL YOU PLAY?  <*\n\n"
				  << "1: slots\n"
				  << "2: go to the crossroads\n\n"
		          << "?: ";
		
		std::string answer;
		std::cin >> answer;

		if (answer == "1") {
			run = false;
			state = slots_;
		}
		else if (answer == "2") {
			run = false;
		}
	}
	
	return state;
}
