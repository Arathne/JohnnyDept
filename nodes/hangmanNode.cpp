#include <horseRaceNode.h>

HorseRaceNode::HorseRaceNode (int current, int end, int casino, int cost, int multiplier):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost),
	multiplier_(multiplier)
{}

HorseRaceNode::~HorseRaceNode (void) {}

int HorseRaceNode::process (Player & player)
{
	int state = casino_;
	int prize = cost_ * multiplier_;
	int bet = 1;

	std::cout << std::endl << "*>  FOUR HORSES ARE ABOUT TO RACE  <*\n"
		<< "*>  guess which horse will win  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per race  <*\n\n"
		<< "1: pink horse\n"
		<< "2: blue horse\n"
		<< "3: yellow horse\n"
		<< "4: red horse\n"
		<< "5: find a new game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		bet = 1;
	else if (answer == "2")
		bet = 2;
	else if (answer == "4")
		bet = 3;
	else if (answer == "4")
		bet = 4;

	if (answer == "1" || answer == "2" || answer == "3" || answer == "4") {
			state = current_;

			int winningHorse = (rand() % 4) + 1;

			if (bet == winningHorse) {
				std::cout << "\n*>  YOU WIN :: THE HORSE THAT YOU BET ON WON  <*";
				std::cout << "\n*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
				player.give(prize);
			}
			else {
				std::cout << "\n*>  YOU LOSE :: BETTER LUCK NEXT TIME  <*" << std::endl;
				player.take(cost_);
			}
	}

	if (player.cash() <= 0)
		state = end_;

	return state;
}
