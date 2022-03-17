#include "FistfullODollars.h"

int FistfullODollars::F = 0;

FistfullODollars::FistfullODollars() {}
FistfullODollars::~FistfullODollars() {}
void FistfullODollars::play()
{
	this->move = (F % 3 == 0) ? 'R' : 'P';
	this->F++;
}
void FistfullODollars::rst() { this->F = 0; }