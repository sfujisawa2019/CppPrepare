#include "Slime.h"
#include "Boss.h"
#include <iostream>
using namespace std;

int main() {

	Monster* monsters[2];

	// �����t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
			monsters[i] = new Slime;
		else
			monsters[i] = new Boss;
	}

	// �U���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		monsters[i]->Attack();
	}

	// �j���t�F�[�Y
	for (int i = 0; i < 2; i++)
	{
		delete monsters[i];
	}

	system("pause");
	return 0;
}