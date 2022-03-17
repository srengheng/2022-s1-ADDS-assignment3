#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Referee.h"
#include <array>

class Tournament
{
	int lose = 0;
public:
	Tournament();
	~Tournament();
	Player* duel(Player*, Player*);
	Player* run(std::array<Player*, 8>);
};

#endif