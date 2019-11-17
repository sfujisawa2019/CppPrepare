#pragma once
#include <string>
#include "Weapon.h"

// �|�P�����N���X
class Pokemon
{
	using string = std::string;
public:
	// �R���X�g���N�^�̐錾
	Pokemon();
	// �����t���R���X�g���N�^�̐錾
	Pokemon(std::string name);
	// �f�X�g���N�^�̐錾
	~Pokemon();
	// ���܂��
	void Birth();
	// �q���|�P�������Y��
	void Bear();
public:
	// ���O
	std::string name;
	// �q���|�P�����̃|�C���^
	Pokemon* child;
	// �|�P������������
	Weapon weapon;
};