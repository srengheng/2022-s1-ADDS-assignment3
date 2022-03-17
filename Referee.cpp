#include "Referee.h"

Referee::Referee() {}
Referee::~Referee() {}
char Referee::refGame(Player* p1, Player* p2)
{
	p1->play();
	p2->play();
	if (p1->makeMove() == p2->makeMove())
		this->game = 'T';
	else if (((p1->makeMove() == 'R') && (p2->makeMove() == 'P')) || ((p1->makeMove() == 'P') && (p2->makeMove() == 'S')) || ((p1->makeMove() == 'S') && (p2->makeMove() == 'R')))
		this->game = 'L';
	else
		this->game = 'W';
	return this->game;
}