#include "Tournament.h"

Tournament::Tournament() {}
Tournament::~Tournament() {}
Player* Tournament::duel(Player* p1, Player* p2)
{
	for (int i = 0; i < 5; i++)
	{
		Referee check;
		if (check.refGame(p1, p2) == 'L')
			++this->lose;
	}
	p1->rst();
	p2->rst();
	if (lose >= 3)
	{
		this->lose = 0;
		return p2;
	}
	else
	{
		this->lose = 0;
		return p1;
	}
}
Player* Tournament::run(std::array<Player*, 8> p)
{
	return duel(duel(duel(p[0], p[1]), duel(p[2], p[3])), duel(duel(p[4], p[5]), duel(p[6], p[7])));
}