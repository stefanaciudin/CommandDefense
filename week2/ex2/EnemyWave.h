#pragma once

class EnemyWave
{
private:
	char Name[200];
	unsigned int EnemyNumber;
	unsigned int Health;
	float Money;

public:
	const char* getName() const;
	void setName(char *name);

	int getEnemyNumber() const;
	bool setEnemyNumber(int maxEnemies);
	bool  setHealth(int health);
	int getHealth() const;
	float getMoney() const;
	void setMoney(int money);
};