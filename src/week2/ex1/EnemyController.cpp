#include "EnemyController.h"
#include "Enemy.h" // to actualy use the field Enemy declared in the header by forward declaration, we use the field here

void EnemyController::Init(int maximumEnemies, int step, Point initialLocation)
{
	maxEnemies=maximumEnemies;
	stepSize=step;
	initialLocation.x = startinLocation.x;
	initialLocation.y = startinLocation.y;
	alive = 0;
	enemies = new Enemy[maximumEnemies];
	for (int i = 0; i < maximumEnemies; i++)
		enemies[i].Init(initialLocation, ENEMY_HEALTH);
}
void EnemyController::Uninit()
{
	delete enemies;
	maxEnemies = 0;
	stepSize = 0;

}

//move in ce directie?
void EnemyController::Move()//sau trebuia definita o variabila directie si data ca parametru pt functie?
{
	for (int i = 0; i < alive; i++)
		enemies[i].Move(EnemyDirection::LeftDirection, stepSize);

}
void EnemyController::DamageAll()
{
	for (int i = 0; i < alive; i++)
		enemies[i].Shoot(i + 1);

}
int EnemyController::CountKilledEnemies()
{
	int dead = 0;
	for (int i = 0; i < alive; i++)
		if (enemies[i].IsDead())
			dead++;
	return dead;
}
bool EnemyController::SpawnEnemy()
{
	if (alive < maxEnemies)
	{
		alive++;
		return true;
	}
	else
		return false;
}