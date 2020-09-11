#include <rockPSNode.h>

RockPSNode::RockPSNode (int current, int end, int casino, int cost, int multiplier):
	current_(current),
	end_(end),
	casino_(casino),
	cost_(cost),
	multiplier_(multiplier)
{}

RockPSNode::~RockPSNode (void) {}

int RockPSNode::process (Player & player)
{
	int state = casino_;
	int prize = cost_ * multiplier_;

	std::cout << std::endl << "*>  INTENSE ROCK PAPER SCISSORS  <*\n"
		<< "*>  paper > rock  ::  rock > scissors  ::  scissors > paper  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  $" << cost_ << " entry fee  <*\n\n"
		<< "1: rock\n"
		<< "2: paper\n"
		<< "3: scissors\n"
		<< "4: find a new game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	int user = 0;

	if (answer == "1")
		user = 1;
	else if (answer == "2")
		user = 2;
	else if (answer == "3")
		user = 3;


	if (answer == "1" || answer == "2" || answer == "3")
	{
		state = current_;
		player.take(cost_);

		int computer = (rand() % 3) + 1;
		int win = 0;

		if (user == computer) // decide if player has won
			win = -1;
		else if (user == 1 && computer == 3)
			win = 1;
		else if (user == 2 && computer == 1)
			win = 1;
		else if (user == 3 && computer == 2)
			win = 1;


		if (win == -1) {
			std::cout << "\n*>  TIE :: NOBODY WINS  <*" << std::endl;
		}
		else if (win == 0) {
			std::cout << "\n*>  YOU LOSE :: HE READ YOU LIKE A BOOK  <*" << std::endl;
		}
		else if (win == 1) {
			std::cout << "\n*>  YOU WIN!!!!<*";
			std::cout << "\n*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
			player.give(prize);
		}
	}

	if (player.cash() <= 0)
		state = end_;

	return state;
}
