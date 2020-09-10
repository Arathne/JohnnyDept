#include <twentyOneNode.h>

TwentyOneNode::TwentyOneNode (int current, int end, int casino, int cost, int multiplier):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost),
	multiplier_(multiplier)
{}

TwentyOneNode::~TwentyOneNode (void) {}

int TwentyOneNode::process (Player & player)
{
	int state = casino_;
	int prize = cost_ * multiplier_;

	std::cout << std::endl << "*>  BLACK JACK  <*\n"
		<< "*>  get as close to 21 as possible, but do not go over  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " per match  <*\n\n"
		<< "1: play\n"
		<< "2: find a new game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
	{
		state = current_;
		bool run = true;
		int total = 0;

		while (run)
		{
			int hit = (rand() % 10) + 1;
			total += hit;
			std::cout << "\n*>  CURRENT VALUE OF CARDS :: " << total << "  <*\n";

			if (total > 21) {
				run = false;
			}
			else {
				std::cout << "\n1. hit\n"
					<< "2. stay\n\n"
					<< "?: ";

				std::string answer2;
				std::cin >> answer2;

				if (answer2 != "1") {
					run = false;
				}
			}
		}

		int dealer = (rand() % 5) + 16;
		int win = -1;

		if (total > 21) {
			win = 0;
		}
		else {
			if (total > dealer) {
				win = 1;
			}
		}

		std::cout << "\n*>  YOU :: " << total << "  <*\n"
			<< "*>  DEALER :: " << dealer << "  <*\n";

		if (win == 1) {
			std::cout << "\n*>  YOU WIN  <*\n";
			std::cout << "*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
			player.give(prize);
		}
		else {
			std::cout << "\n*>  YOU LOSE  <*\n";
			player.take(cost_);
		}
	}

	if (player.cash() <= 0)
		state = end_;

	return state;
}
