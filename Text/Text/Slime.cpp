#include "Slime.h"
#include <iostream>
using namespace std;

// �R���X�g���N�^�i��`�j
Slime::Slime()
{
	name = "�X���C��";

	cout << name << "�����܂ꂽ" << endl;
}

// �f�X�g���N�^�i��`�j
Slime::~Slime()
{
	cout << name << "�����ł���" << endl;
}

// �U���i��`�j
void Slime::Attack()
{
	cout << name << "�̑̓�����I" << endl;
}
