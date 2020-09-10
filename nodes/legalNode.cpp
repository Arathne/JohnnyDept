#include <legalNode.h>

LegalNode::LegalNode (int current, int casino, int slots, int coinFlip, int twentyOne, int rockPS):
	current_(current),
	casino_(casino),
	slots_(slots),
	coinFlip_(coinFlip),
	twentyOne_(twentyOne),
	rockPS_(rockPS)
{}

LegalNode::~LegalNode (void) {}

int LegalNode::process (Player & player)
{
	int state = current_;

	std::cout << std::endl << "*>  LOTS OF GAMES ALL AROUND YOU  <*\n\n"
		<< "1: slot machines\n"
		<< "2: coin flip\n"
		<< "3: black jack\n"
		<< "4: rock paper scissors\n"
		<< "5: go back to the entrance\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		state = slots_;
	else if (answer == "2")
		state = coinFlip_;
	else if (answer == "3")
		state = twentyOne_;
	else if (answer == "4")
		state = rockPS_;
	else if (answer == "5")
		state = casino_;

	return state;
}
