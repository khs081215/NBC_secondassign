#pragma once
#ifndef MAGICIAN_H_
#define MAGICIAN_H_
#include "Player.h"

class Magician :public Player
{
public:
	Magician(string nickname);
	void attack();
	void attack(Monster* monster);
};
#endif