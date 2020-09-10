#include <casinoNode.h>

CasinoNode::CasinoNode (int current, int home, int legal, int illegal):
	current_(current),
	home_(home),
	illegal_(illegal),
	legal_(legal)
{}

CasinoNode::~CasinoNode (void) {}

int CasinoNode::process (Player & player)
{
	int state = current_;

	std::cout << std::endl << "*>  TEIAI CASINO ENTRANCE  <*\n\n" 
		<< "1: go explore the casino\n"
		<< "2: go to the shady door in the corner\n"
		<< "3: go back home\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		state = legal_;
	else if (answer == "2")
		state = illegal_;
	else if (answer == "3")
		state = home_;

	return state;
}
