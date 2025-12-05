#pragma once
#ifndef Thief_H_
#define Thief_H_
#include "Player.h"

class Thief :public Player
{
public:
	Thief(string nickname);
	void attack();
	void attack(Monster* monster);
};
#endif