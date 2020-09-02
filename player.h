#ifndef PLAYER_H
#define PLAYER_H

class Player 
{
	public:
		Player (void);
		Player (int cash);
		Player (const Player & player);
		~Player (void);

		int cash (void) const;
		
		void give (int cash);	
		void take (int cash);

	private:
		int cash_;
};

#endif
