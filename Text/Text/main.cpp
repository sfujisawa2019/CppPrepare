#include "Slime.h"
#include "Boss.h"
#include <iostream>
using namespace std;

int main() {

Monster* monsters[5];

// �����t�F�[�Y
for (int i = 0; i < 5; i++)
{
	if (i < 2)
		monsters[i] = new Slime;
	else
		monsters[i] = new Boss;
}

// �U���t�F�[�Y
for (int i = 0; i < 5; i++)
{
	monsters[i]->Attack();
}

// �j���t�F�[�Y
for (int i = 0; i < 5; i++)
{
	delete monsters[i];
}

	system("pause");
	return 0;
}