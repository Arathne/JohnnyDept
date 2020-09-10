#include <homeNode.h>

HomeNode::HomeNode (int current, int end, int casino):
	current_(current),
	end_(end),
	casino_(casino)
{}

HomeNode::~HomeNode (void) {}

int HomeNode::process (Player & player) 
{
	int state = current_;

	std::cout << std::endl << "*>  YOU ENTER YOUR RUN DOWN HOME  <*\n\n" 
		<< "1: go to the casino\n"
		<< "2: pay dept\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1")
		state = casino_;
	else if (answer == "2")
		state = end_;

	return state;
}
