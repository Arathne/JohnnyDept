#include <illegalNode.h>

IllegalNode::IllegalNode (int current, int casino, int slots):
	current_(current),
	casino_(casino),
	slots_(slots)
{}

IllegalNode::~IllegalNode (void) {}

int IllegalNode::process (Player & player)
{
	int state = current_;

	std::cout << std::endl << "*>  GO BIG OR GO HOME  <*\n\n" 
		<< "1: go to slot machines\n"
		<< "2: go back to the entrance\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		state = slots_;
	else if (answer == "2")
		state = casino_;

	return state;
}
