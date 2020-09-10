#include <coinFlipNode.h>

CoinFlipNode::CoinFlipNode (int current, int end, int casino, int cost, int multiplier):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost),
	multiplier_(multiplier)
{}

CoinFlipNode::~CoinFlipNode (void) {}

int CoinFlipNode::process (Player & player) 
{
	int state = casino_;
	int prize = cost_ * multiplier_;

	std::cout << std::endl << "*>  STRANGER IS READY TO TOSS A COIN  <*\n" 
		<< "*>  guess correctly and you shall be rewarded  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per toss  <*\n\n"
		<< "1: heads\n"
		<< "2: tails\n"
		<< "3: find a new game\n\n"
		<< "?: ";
	
	std::string answer;
	std::cin >> answer;
	
	int coin = (rand() % 2) + 1;
	int guess = 1;

	if (answer == "2")
		guess = 2;

	if (answer == "1" || answer == "2") {
		state = current_;
		
		if (coin == 1)
			std::cout << "\n*>  COIN LANDED ON HEADS  <*";
		else if (coin == 2)
			std::cout << "\n*>  COIN LANDED ON TAILS  <*";
		
		if (guess == coin){
			std::cout << "\n*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
			player.give(prize);
		}
		else {
			std::cout << std::endl;
			player.take(cost_);
		}
	}

	if (player.cash() <= 0)
		state = end_;

	return state;
}
