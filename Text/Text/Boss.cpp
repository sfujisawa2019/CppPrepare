#include "Boss.h"
#include <iostream>
using namespace std;

// �R���X�g���N�^�i��`�j
Boss::Boss()
{
	name = "�����n�[�S��";

	cout << name << "�����܂ꂽ" << endl;
}

// �f�X�g���N�^�i��`�j
Boss::~Boss()
{
	cout << name << "�����ł���" << endl;
}

// �U���i��`�j
void Boss::Attack()
{
	cout << name << "�̉Ή��̑��I" << endl;
}
