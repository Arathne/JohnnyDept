#include <iostream>
#include <stdlib.h>

#include <player.h>
#include <homeNode.h>
#include <endNode.h>
#include <casinoNode.h>
#include <legalNode.h>
#include <slotsNode.h>
#include <illegalEntranceNode.h>
#include <illegalNode.h>
#include <coinFlipNode.h>
#include <rockPSNode.h>
#include <twentyOneNode.h>
#include <fightClubNode.h>
#include <horseRaceNode.h>
#include <hangmanNode.h>

int main()
{
	srand(time(NULL));

	int state_size = 14;
	int current_state = 1;

	Player player;

	Node* end = new EndNode ();
	Node* home = new HomeNode (1, 0, 2);
	Node* casino = new CasinoNode (2, 1, 3, 5);
	Node* legal = new LegalNode (3, 2, 4, 8, 9, 10);
	Node* slotsLegal = new SlotsNode (4, 0, 3, 4, 25000, 200);
	Node* slotsIllegal = new SlotsNode (7, 0, 6, 6, 250000, 2500);
	Node* illegalEntrance = new IllegalEntranceNode (6, 2);
	Node* illegal = new IllegalNode (6, 2, 7, 11, 12, 13);
	Node* coinFlip = new CoinFlipNode (8, 0, 3, 300, 9);
	Node* twentyOne = new TwentyOneNode (9, 0, 3, 800, 15);
	Node* rockPS = new RockPSNode (10, 0, 3, 400, 12);
	Node* horseRace = new HorseRaceNode (11, 0, 6, 10000, 4);
	Node* fightClub = new FightClubNode (12, 0, 6, 20000, 3);
	Node* hangman = new HangmanNode (13, 0, 6);

	Node* states[] = {
		end,
		home,
		casino,
		legal,
		slotsLegal,
		illegalEntrance,
		illegal,
		slotsIllegal,
		coinFlip,
		twentyOne,
		rockPS,
		horseRace,
		fightClub,
		hangman
	};

	std::cout << "*>  The russian mafia want their money back, this happened because you borrowed 1 dollar with an insane amount of interest  <*" << std::endl;
	std::cout << "*>  go find a way to make $1,000,000 fast!!!!!  <*" << std::endl;

	while (current_state >= 0)
	{
		current_state = states[current_state]-> process(player);
	}

	for( int i = 0; i < state_size; i++ )
		delete states[i];

	return 0;
}
