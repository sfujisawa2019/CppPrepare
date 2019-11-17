#include <iostream>
#include "Pokemon.h"
using namespace std;

// �R���X�g���N�^�̒�`
Pokemon::Pokemon() {
	name = "�|�P����";
	child = nullptr;
}

// �����t���R���X�g���N�^�̒�`
Pokemon::Pokemon(string name) {
	this->name = name;
	child = nullptr;
}

Pokemon::~Pokemon() {
	// �q���|�P���������
	if (child) {
		cout << child->name << "��������܂�" << endl;
		delete child;
	}
	cout << this->name << "�͏����܂��i�f�X�g���N�^�j" << endl;
}

void Pokemon::Birth() {
	cout << "������" << name << "�����܂ꂽ" << endl;
}

void Pokemon::Bear()
{
	// �C���X�^���X����
	child = new Pokemon(name + "�Q��");

	cout << name << "�͎q���|�P�������Y��" << endl;
	child->Birth();
}