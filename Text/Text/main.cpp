#include "Slime.h"
#include "Boss.h"
#include <iostream>
using namespace std;

int main() {

Monster* monsters[5];

// 生成フェーズ
for (int i = 0; i < 5; i++)
{
	if (i < 2)
		monsters[i] = new Slime;
	else
		monsters[i] = new Boss;
}

// 攻撃フェーズ
for (int i = 0; i < 5; i++)
{
	monsters[i]->Attack();
}

// 破棄フェーズ
for (int i = 0; i < 5; i++)
{
	delete monsters[i];
}

	system("pause");
	return 0;
}