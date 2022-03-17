#include "Crescendo.h"

int Crescendo::C = 0;

Crescendo::Crescendo() {}
Crescendo::~Crescendo() {}
void Crescendo::play()
{
	this->move = (C % 3 == 0) ? 'P' : (C % 3 == 1) ? 'S' : 'R';
	this->C++;
}
void Crescendo::rst() { this->C = 0; }