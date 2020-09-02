#include <player.h>

#define INIT_CASH 0

Player::Player (void): 
	cash_(INIT_CASH)
{}

Player::Player (int cash):
	cash_(cash)
{}

Player::Player (const Player & player): 
	cash_(player.cash_)
{}

Player::~Player (void) {}


int Player::cash (void) const
{
	return cash_;
}

void Player::give (int cash) 
{
	if (cash > 0) 
		cash_ += cash;
}

void Player::take (int cash)
{
	if (cash > 0)
		cash_ -= cash;
}
