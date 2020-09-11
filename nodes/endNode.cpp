#include <endNode.h>

EndNode::EndNode (void) {}

EndNode::~EndNode (void) {}

int EndNode::process (Player & player)
{
	std::cout << "\n*>  GAME OVER  <*" << std::endl;
	if (player.cash() >= 2000000) {
		std::cout << "\n*>  you go to IUPUI and become a computer scientist, money is raining everywhere  <*" << std::endl;
	}
	else if (player.cash() >= 1000000) {
		std::cout << "\n*>  SUCCESS! you dept is paid and free to go without any issues, except you become a gambling addict and lost all your money again  <*" << std::endl;
	}
	else if (player.cash() >= 800000) {
		std::cout << "\n*>  the mob boss is impressed with the amount of money you earned in a short amount of time  <*"
			<< "\n*>  he lets you go, but roughs you up a little in the process   <*" << std::endl;
	}
	else if (player.cash() >= 600000) {
		std::cout << "\n*>  you are forced to watch the news for 30 years without breaks  <*"
			<< "\n*>  once you are released, you live your life in fear paranoid of everything  <*" << std::endl;
	}
	else if (player.cash() >= 400000) {
		std::cout << "\n*>  you are kidnapped and forced to work for 60 years  <*" << std::endl;
	}
	else if (player.cash() >= 200000) {
		std::cout << "\n*>  you lose everything, your house, your family, and all your organs. RIP  <*" << std::endl;
	}

	return -1;
}
