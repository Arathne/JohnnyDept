#include <illegalEntranceNode.h>

IllegalEntranceNode::IllegalEntranceNode (int illegal, int casino):
	illegal_(illegal),
	casino_(casino),
	payed_(false)
{}

IllegalEntranceNode::~IllegalEntranceNode (void) {}

int IllegalEntranceNode::process (Player & player)
{
	int state = casino_;

	std::cout << std::endl << "*>  A HOLE IN THE DOOR OPENS AND YOU SEE A PAIR OF EYES STARING AT YOU  <*\n";

	if (payed_) {
		std::cout << "\n*>  THE GATEKEEPER RECOGNIZED YOU :: OPENS DOOR  <*\n"
			<< "*>  YOU ENTER THE TEIAI UNDERGROUND CASINO  <*\n";
		state = illegal_;
	}
	else {
		std::cout << "*>  THE GATEKEEPER DID NOT RECOGNIZE YOU  <*\n\n"
			<< "*>  GATEKEEPER: pay $100,000 for access  <*\n\n"
			<< "1. pay $100,000\n"
			<< "2. walk away awkwardly\n\n"
			<< "?: ";
		
		std::string answer;
		std::cin >> answer;
	
		if (answer == "1") {
			if (player.cash() >= 100000) {
				std::cout << "\n*>  YOU ENTER THE TEIAI UNDERGROUND CASINO  <*\n";
				
				player.take(100000);
				state = illegal_;
				payed_ = true;
			}
			else
				std::cout << "\n*>  NOT ENOUGH CASH :: YOU WALK AWAY A WISER FOOL  <*\n";
		}
	}

	return state;
}
