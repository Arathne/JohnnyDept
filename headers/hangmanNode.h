#ifndef HANGMAN_NODE_H
#define HANGMAN_NODE_H

#include "node.h"

class HangmanNode : public Node
{
	public:
		HangmanNode (int current, int end, int casino);
		~HangmanNode (void);
		int process (Player & player);

	private:
		HangmanNode (void);

		void guess (std::string playerGuess);
		std::string solved_;
		std::string unsolved_;

		int current_;
		int end_;
		int casino_;
};

#endif
