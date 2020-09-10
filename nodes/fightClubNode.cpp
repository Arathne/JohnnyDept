#include <fightClubNode.h>

FightClubNode::FightClubNode (int current, int end, int casino, int cost, int multiplier):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost),
	multiplier_(multiplier)
{}

FightClubNode::~FightClubNode (void) {}

int FightClubNode::process (Player & player)
{
	int state = casino_;
	int prize = cost_ * multiplier_;

	std::cout << std::endl << "*>  STRANGER IS WAITING IN THE BOXING RING  <*\n"
		<< "*>  win 1 round against him  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per fight  <*\n\n"
		<< "1: fight\n"
		<< "2: find a new game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	int coin = (rand() % 2) + 1;
	int guess = 1;

	if (answer == "1") {
		state = current_;

		if (guess == coin){
			std::cout << "\n*>  HE STOOD NO CHANCE AGAINST YOU  <*";
			std::cout << "\n*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
			player.give(prize);
		}
		else {
			std::cout << "\n*>  BEATEN TO A PULP  <*" << std::endl;
			player.take(cost_);
		}
	}

	if (player.cash() <= 0)
		state = end_;

	return state;
}
