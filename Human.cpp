#include "Human.h"
using namespace std;

Human::Human() {}

Human::~Human() {}

void Human::play()
{
	cout << "Enter move: ";
	cin >> this->move;
}