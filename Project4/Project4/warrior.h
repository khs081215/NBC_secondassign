#pragma once
#ifndef WARRIOR_H_
#define WARRIOR_H_
#include "Player.h"

class Warrior:public Player
{
public:
	Warrior(string nickname);
	void attack();
	void attack(Monster* monster);
};
#endif