#pragma once
#include <string>

// �����X�^�[�N���X�̒�`
class Monster
{
	using string = std::string;
public: /* �����o�֐� */
	// �R���X�g���N�^�i�錾�j
	Monster();
	// �f�X�g���N�^�i�錾�j
	~Monster();
	// �U���i�錾�j
	void Attack();
protected: /* �����o�ϐ� */
	// ���O
	string name;
};