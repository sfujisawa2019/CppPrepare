#pragma once
#include <string>

// 前方宣言
class Sumo;

// 空手家クラス
class Karateka
{
	using string = std::string;
public:
	// コンストラクタの宣言
	Karateka(string name);
	// setter（書き込む）
	void SetCountWin(int countWin) { this->countWin = countWin; }
	// getter（読み取る）
	int GetCountWin() { return countWin; }
	// setter（書き込む）
	void SetCountLose(int countLose) { this->countLose = countLose; }
	// getter（読み取る）
	int GetCountLose() { return countLose; }
	/**
	 * @fn 空手に勝つ
	 * @param (opponent) 対戦相手の空手家
	 * @return なし
	 */
	void WinKarateka(Karateka* opponent);

	void WinSumo(Sumo* opponent);

private:
	// 名前
	string name;
	// 勝ち数
	int countWin;
	// 負け数
	int countLose;
};