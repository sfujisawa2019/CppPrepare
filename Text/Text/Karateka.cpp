#include "Karateka.h"
#include "Sumo.h"

// コンストラクタの定義
Karateka::Karateka(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Karateka::WinKarateka(Karateka * opponent)
{
	// 自分の勝ち数を１増やす
	countWin++;
	// 対戦相手の負け数を１増やす
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Karateka::WinSumo(Sumo * opponent)
{
	// 自分の勝ち数を１増やす
	countWin++;
	// 対戦相手の負け数を１増やす
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

