#pragma once
#include "Monster.h"

// �X���C���N���X�̒�`
class Slime : public Monster
{
	using string = std::string;
public: /* �����o�֐� */
	// �R���X�g���N�^�i�錾�j
	Slime();
	// �f�X�g���N�^�i�錾�j
	~Slime();
	// �U���i�錾�j
	void Attack();
private: /* �����o�ϐ� */
};