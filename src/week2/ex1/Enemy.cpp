#include "Enemy.h"
void Enemy::Init(Point initialLocation, int initialHealh)
{
	location.x = initialLocation.x;
	location.y = initialLocation.y;
	health = initialHealh;

}
void Enemy::Move(EnemyDirection direction, int step)
{
	switch (direction)
	{
	case EnemyDirection::UpDirection:
		location.y -= step;
		break;
	case EnemyDirection::DownDirection:
		location.y += step;
		break;
	case EnemyDirection::LeftDirection:
		location.y -= step;
		break;
	case EnemyDirection::RightDirection:
		location.x += step;
		break;
}

}

bool Enemy::IsDead()
{
	if (health <= 0)
		return true;
	else
		return false;

}
void Enemy::Shoot(int damage)
{
	health -= damage;

}