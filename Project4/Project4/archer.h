#pragma once
#ifndef ARCHER_H_
#define ARCHER_H_
#include "Player.h"

class Archer :public Player
{
public:
	Archer(string nickname);
	void attack();
	void attack(Monster* monster);
};
#endif