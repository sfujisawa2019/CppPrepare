#pragma once
#include <string>

// �O���錾
class Karateka;

// ���o���N���X
class Sumo
{
	using string = std::string;
public:
	// �R���X�g���N�^�̐錾
	Sumo(string name);
	// setter�i�������ށj
	void SetCountWin(int countWin) { this->countWin = countWin; }
	// getter�i�ǂݎ��j
	int GetCountWin() { return countWin; }
	// setter�i�������ށj
	void SetCountLose(int countLose) { this->countLose = countLose; }
	// getter�i�ǂݎ��j
	int GetCountLose() { return countLose; }
	/**
	 * @fn ���o�ɏ���
	 * @param (opponent) �ΐ푊��̑��o���
	 * @return �Ȃ�
	 */
	void WinSumo(Sumo* opponent);

	void WinKarateka(Karateka* opponent);

private:
	// ���O
	string name;
	// ������
	int countWin;
	// ������
	int countLose;
};