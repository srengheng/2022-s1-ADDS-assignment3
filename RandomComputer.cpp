#include "RandomComputer.h"

int RandomComputer::R = 0;

RandomComputer::RandomComputer() { srand(time(0)); }
RandomComputer::~RandomComputer() {}
void RandomComputer::play()
{
	this->R = rand();
	this->move = (R % 3 == 0) ? 'R' : (R % 3 == 1) ? 'P' : 'S';
}
