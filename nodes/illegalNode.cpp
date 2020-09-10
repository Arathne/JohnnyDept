#include <illegalNode.h>

IllegalNode::IllegalNode (int current, int casino, int slots, int horserace, int fightclub, int hangman):
	current_(current),
	casino_(casino),
	slots_(slots),
	horserace_(horserace),
	fightclub_(fightclub),
	hangman_(hangman)
{}

IllegalNode::~IllegalNode (void) {}

int IllegalNode::process (Player & player)
{
	int state = current_;

	std::cout << std::endl << "*>  LOTS OF ILLEGAL GAMES ALL AROUND YOU  <*\n\n"
		<< "1: slot machines\n"
		<< "2: horse race\n"
		<< "3: fight club\n"
		<< "4: hangman\n"
		<< "5: go back to the entrance\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		state = slots_;
	else if (answer == "2")
		state = horserace_;
	else if (answer == "3")
		state = fightclub_;
	else if (answer == "4")
		state = hangman_;
	else if (answer == "4")
		state = casino_;

	return state;
}
