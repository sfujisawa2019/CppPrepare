#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(string name)
{
	this->name = name;
	henchman = nullptr;
	cout << name << "�����܂ꂽ" << endl;
}

Human::~Human()
{
	delete henchman;
	cout << name << "������" << endl;
}

Human::Human(const Human& obj)
{
	cout << obj.name << "���R�s�[���܂�" << endl;

	// ���O���R�s�[
	name = obj.name;

	// �q���������
	if (obj.henchman) {
		// �q�����N���[��
		henchman = new Human(*obj.henchman);
	}
}

Human& Human::operator=(const Human & obj)
{
	cout << obj.name << "�������Z�q�ŃR�s�[���܂�" << endl;

	// ���O���R�s�[
	name = obj.name;

	// �q���������
	if (obj.henchman) {
		// �q�����N���[��
		henchman = new Human(*obj.henchman);
	}

	return *this;
}

void Human::Introduce()
{
	cout << "����" << name << "�ł�" << endl;
}

void Human::MakeHenchman()
{
	henchman = new Human(name + "�̎q��");
}
