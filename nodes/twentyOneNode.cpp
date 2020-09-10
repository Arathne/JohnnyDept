#include <twentyOneNode.h>

TwentyOneNode::TwentyOneNode (int current, int end, int casino, int cost):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost)
{}

TwentyOneNode::~TwentyOneNode (void) {}

int TwentyOneNode::process (Player & player) 
{
	int state = casino_;

	std::cout << std::endl << "*>  STRANGER IS READY TO TOSS A COIN  <*\n" 
		<< "*>  guess correctly to double your money  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per toss  <*\n\n"
		<< "1: Heads\n"
		<< "2: Tails\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;
	
	return state;
}
