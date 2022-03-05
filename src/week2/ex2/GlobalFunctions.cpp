#include "GlobalFunctions.h"

int CmpEnemyNumber(EnemyWave A, EnemyWave B)
{
	int EnemyNumberA = A.getEnemyNumber();
	int EnemyNumberB = B.getEnemyNumber();
	if (EnemyNumberA == EnemyNumberB)
		return 0;
	if (EnemyNumberA > EnemyNumberB)
		return 1;
	if (EnemyNumberA < EnemyNumberB)
		return -1;
}
int CmpEnemyMoney(EnemyWave A, EnemyWave B)
{
	int EnemyMoneyA = A.getMoney();
	int EnemyMoneyB = B.getMoney();
	if (EnemyMoneyA == EnemyMoneyB)
		return 0;
	if (EnemyMoneyA > EnemyMoneyB)
		return 1;
	if (EnemyMoneyA < EnemyMoneyB)
		return -1;
}