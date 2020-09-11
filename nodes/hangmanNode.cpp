#include <hangmanNode.h>

HangmanNode::HangmanNode (int current, int end, int casino):
	solved_("HELLO WORLD"),
	unsolved_("_____ _____"),
	current_(current),
	end_(end),
	casino_(casino)
{}

HangmanNode::~HangmanNode (void) {}

int HangmanNode::process (Player & player)
{
	int state = casino_;
	int prize = 3000000;

	std::cout << std::endl << "*>  WELCOME TO HANGMAN  <*\n"
		<< "*>  guess the word  <*\n"
		<< "*>  cash: $" << player.cash() << "  <*\n"
		<< "*>  cost: all your money  <*\n\n"
		<< "1: play\n"
		<< "2: find another game\n\n"
		<< "?: ";

	std::string answer;
	std::cin >> answer;

	if (answer == "1") {
		state = end_;
		bool win = false;

		int tries = 14;
		bool run = true;
		while (tries > 0 && run) // hangman game
		{
			std::cout << "\n" << unsolved_ << std::endl;
			std::cout << "\n*>  ATTEMPTS LEFT :: " << tries << "  <*\n\n"
				"?: ";

			std::string answer2;
			std::cin >> answer2;

			guess(answer2);

			if (solved_ == unsolved_) // exit loop once solved
			{
				win = true;
				run = false;
			}

			tries--;
		}

		if (win) { // check if player won
			std::cout << "\n*>  $" << prize << " DEPOSITED INTO YOUR ACCOUNT  <*" << std::endl;
			player.give(prize);
		}
		else {
			std::cout << "\n*>  ALL YOUR WINNINGS HAVE BEEN TAKEN FROM YOU  <*" << std::endl;
			player.take(999999999);
		}
	}

	return state;
}

void HangmanNode::guess (std::string playerGuess)
{
	if (playerGuess.length() > 0) // cannot be empty string
	{
		for (int i = 0; i < solved_.length(); i++) // go through answer
		{
			char letter = solved_.at(i);
			if (letter == toupper(playerGuess.at(0))) // if letter is in answer, add to player word
			{
				unsolved_.at(i) = letter;
			}
		}
	}
}
