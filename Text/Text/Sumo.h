#pragma once
#include <string>

// 前方宣言
class Karateka;

// 相撲取りクラス
class Sumo
{
	using string = std::string;
public:
	// コンストラクタの宣言
	Sumo(string name);
	// setter（書き込む）
	void SetCountWin(int countWin) { this->countWin = countWin; }
	// getter（読み取る）
	int GetCountWin() { return countWin; }
	// setter（書き込む）
	void SetCountLose(int countLose) { this->countLose = countLose; }
	// getter（読み取る）
	int GetCountLose() { return countLose; }
	/**
	 * @fn 相撲に勝つ
	 * @param (opponent) 対戦相手の相撲取り
	 * @return なし
	 */
	void WinSumo(Sumo* opponent);

	void WinKarateka(Karateka* opponent);

private:
	// 名前
	string name;
	// 勝ち数
	int countWin;
	// 負け数
	int countLose;
};