#include "monster.h"

Monster::Monster(string name)
{
	this->name = name;
	HP = 10;
	power = 30;
	defence = 10;
	speed = 10;
}

void Monster::attack(Player* player)
{
	int damage = power - player->getDefence();
	if (damage <= 0) damage = 1;
	cout <<this->name<< " 몬스터에게 공격을 받아 " << damage << "의 피해를 입었다." << endl;

	int playerremainHP = player->getHP() - damage;
	if (player->setHP(playerremainHP))
	{
		
		cout << player->getNickname()<<" 플레이어의 HP가 " << player->getHP() << "만큼 남았습니다.\n" << endl;
	}
	else
	{
		cout << player->getNickname()<<" 플레이어의 HP가 " << player->getHP() << "로 남아 생존하지 못했습니다." << endl;
		cout << this->name<<" 몬스터가 승리했습니다!" << endl;
	}
}

string Monster::getName()
{
	return name;
}

int Monster::getHP()
{
	return HP;
}

int Monster::getPower()
{
	return power;
}

int Monster::getDefence()
{
	return defence;
}

int Monster::getSpeed()
{
	return speed;
}

void Monster::setName(string name)
{
	this->name = name;
}

bool Monster::setHP(int HP)
{
	if (HP >= 1) {
		this->HP = HP;
		return true;
	}
	else {
		this->HP = 0;
		return false;
	}
}

void Monster::setPower(int power)
{
	this->power = power;
}

void Monster::setDefence(int defence)
{
	this->defence = defence;
}

void Monster::setSpeed(int speed)
{
	this->speed = speed;
}