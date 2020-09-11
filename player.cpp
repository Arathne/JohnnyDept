#include <player.h>

#define INIT_CASH 300000

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
	cash_ += cash;
	Player::checkCash();
}

void Player::take (int cash)
{
	cash_ -= cash;
	Player::checkCash();
}

void Player::checkCash (void)
{
	if (cash_ < 0)
		cash_ = 0;
}
