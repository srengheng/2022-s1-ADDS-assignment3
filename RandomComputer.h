#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include <ctime>
#include <random>
#include "Player.h"

class RandomComputer :public Player
{
	static int R;
public:
	RandomComputer();
	~RandomComputer();
	void play();
};

#endif
