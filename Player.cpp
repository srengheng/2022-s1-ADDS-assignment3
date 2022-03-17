#include "Player.h"

Player::Player(char m) { this->move = m; }
Player::~Player() {}
void Player::play() {}
void Player::rst() {}
char Player::makeMove() { return this->move; }