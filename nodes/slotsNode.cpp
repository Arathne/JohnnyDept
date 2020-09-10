#include <slotsNode.h>

SlotsNode::SlotsNode (int current, int end, int legal, int maxRoll, int prize, int cost):
	current_(current),
	end_(end),
	legal_(legal),
	maxRoll_(maxRoll),
	prize_(prize),
	cost_(cost)
{}

SlotsNode::~SlotsNode (void) {}

int SlotsNode::process (Player & player)
{
	int state = current_;

	std::cout << std::endl << "*>  YOU SIT IN FRONT OF A SLOT MACHINE  <*\n" 
		<< "*>  roll the same number 3 times to win  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per roll  <*\n\n"
		<< "1: pull lever\n"
		<< "2: find a new game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1") 
	{
		player.take(cost_);
		int prize = SlotsNode::play();
		player.give(prize);		
		
		if (prize > 0)
			std::cout << "*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
	}
	else if (answer == "2")
		state = legal_;
	
	if (player.cash() <= 0)
		state = end_;

	return state;
}

int SlotsNode::play (void)
{
	int cashWon = 0;
	
	int num1 = rand() % maxRoll_;
	int num2 = rand() % maxRoll_;
	int num3 = rand() % maxRoll_;
	
	std::cout << std::endl << "*>  " << num1 << " "<< num2 << " " << num3 << "  <*\n";
	
	if (num1 == num2 && num2 == num3) 
	{
		cashWon = prize_;
		std::cout << "*>  WINNER WINNER CHICKEN DINNER!  <*\n";
	}

	return cashWon;
}
