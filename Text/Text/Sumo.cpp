#include "Sumo.h"
#include "Karateka.h"

// コンストラクタの定義
Sumo::Sumo(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Sumo::WinSumo(Sumo * opponent)
{
	// 自分の勝ち数を１増やす
	countWin++;
	// 対戦相手の負け数を１増やす
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Sumo::WinKarateka(Karateka * opponent)
{
	// 自分の勝ち数を１増やす
	countWin++;
	// 対戦相手の負け数を１増やす
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

