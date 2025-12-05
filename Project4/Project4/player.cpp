#include "player.h"
#include <iostream>
#include <string>

using namespace std;


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

Player::Player(string nickname)
{
    this->nickname = nickname;
    this->job_name = "No Job";
    level = 10;
    HP = 100;
    MP = 100;
    power = 11;
    defence = 10;
    accuracy = 5;
    speed = 5;
}

string Player::getJobName()
{
    return job_name;
}

string Player::getNickname()
{
    return nickname;
}

int Player::getLevel()
{
    return level;
}

int Player::getHP()
{
    return HP;
}

int Player::getMP()
{
    return MP;
}

int Player::getPower()
{
    return power;
}

int Player::getDefence()
{
    return defence;
}

int Player::getAccuracy()
{
    return accuracy;
}

int Player::getSpeed()
{
    return speed;
}

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

bool Player::setHP(int HP)
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

bool Player::setMP(int MP)
{
    if (MP >= 1) {
        this->MP = MP;
        return true;
    }
    else {
        this->MP = 0;
        return false;
    }
}

void Player::setPower(int power) 
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}

void Player::setSpeed(int speed)
{
    this->speed = speed;
}