#pragma once
#include <string>

// �O���錾
class Sumo;

// ���ƃN���X
class Karateka
{
	using string = std::string;
public:
	// �R���X�g���N�^�̐錾
	Karateka(string name);
	// setter�i�������ށj
	void SetCountWin(int countWin) { this->countWin = countWin; }
	// getter�i�ǂݎ��j
	int GetCountWin() { return countWin; }
	// setter�i�������ށj
	void SetCountLose(int countLose) { this->countLose = countLose; }
	// getter�i�ǂݎ��j
	int GetCountLose() { return countLose; }
	/**
	 * @fn ���ɏ���
	 * @param (opponent) �ΐ푊��̋���
	 * @return �Ȃ�
	 */
	void WinKarateka(Karateka* opponent);

	void WinSumo(Sumo* opponent);

private:
	// ���O
	string name;
	// ������
	int countWin;
	// ������
	int countLose;
};