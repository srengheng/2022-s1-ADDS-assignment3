#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
	char move;
public:
	Player(char = 'R');
	~Player();
	virtual void play();
	virtual void rst();
	char makeMove();
};

#endif