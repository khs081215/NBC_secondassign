#include "archer.h"

Archer::Archer(string nickname) :Player(nickname)
{
	this->job_name = "Archer";
}
void Archer::attack()
{
	cout << "Archer shoots an Arrow!"<<endl;
}
void Archer::attack(Monster* monster)
{
	int damage = power - monster->getDefence();
	damage /= 3;
	if (damage <= 0) damage = 1;
	for (int i = 0; i < 3; i++)
	{
		cout << monster->getName() << " 몬스터를 화살로 " << damage << "의 피해를 입혔다!" << endl;
	}
	damage *= 3;
	int monsterremainHP = monster->getHP() - damage;
	if (monster->setHP(monsterremainHP))
	{

		cout << monster->getName() << " 몬스터의 HP가 " << monster->getHP() << "만큼 남았습니다.\n" << endl;
	}
	else
	{
		cout << monster->getName() << " 몬스터의 HP가 " << monster->getHP() << "로 몬스터를 처치했습니다." << endl;
		cout << this->nickname << " 플레이어가 승리했습니다!" << endl;
	}

}