#ifndef ILLEGAL_NODE_H
#define ILLEGAL_NODE_H

#include <node.h>

class IllegalNode : public Node
{
	public:
		IllegalNode (int current, int casino, int slots, int horserace, int fightclub, int hangman);
		~IllegalNode (void);
		int process (Player & player);

	private:
		IllegalNode (void);

		int current_;
		int casino_;
		int slots_;
		int horserace_;
		int fightclub_;
		int hangman_;
};

#endif
