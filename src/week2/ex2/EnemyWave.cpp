#include "EnemyWave.h"
#include <cstring>
#pragma warning(disable:4996)

const char* EnemyWave::getName() const
{
	return Name;
}

void EnemyWave::setName(char* name)
{
	strcpy(Name, name);
}
int EnemyWave::getEnemyNumber() const
{
	return EnemyNumber;
}
bool EnemyWave::setEnemyNumber(int maxEnemies)
{
	if (maxEnemies > 0)
	{
		EnemyNumber = maxEnemies;
		return true;
	}
	else
		return false;
}
int EnemyWave::getHealth() const
{
	return Health;
}
bool EnemyWave::setHealth(int health)
{
	if (health > 0)
	{
		Health=health;
		return true;
	}
	else
		return false;
}

float EnemyWave::getMoney() const
{
	return Money;
}

void EnemyWave::setMoney(int money)
{
	Money=money;
}