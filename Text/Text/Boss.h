#pragma once
#include "Monster.h"

// �X���C���N���X�̒�`
class Boss : public Monster
{
	using string = std::string;
public: /* �����o�֐� */
	// �R���X�g���N�^�i�錾�j
	Boss();
	// �f�X�g���N�^�i�錾�j
	~Boss();
	// �U���i�錾�j
	void Attack();
private: /* �����o�ϐ� */
};