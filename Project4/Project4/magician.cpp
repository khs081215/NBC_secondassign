#include "magician.h"

Magician::Magician(string nickname) :Player(nickname)
{
	this->job_name = "Magician";
}
void Magician::attack()
{
	cout << "Magician casts Fireball!"<<endl;
}
void Magician::attack(Monster* monster)
{
	int damage = power - monster->getDefence();
	if (damage <= 0) damage = 1;
	cout << monster->getName() << " 몬스터를 파이어볼로 " << damage << "의 피해를 입혔다!" << endl;

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