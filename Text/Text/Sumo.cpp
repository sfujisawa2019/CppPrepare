#include "Sumo.h"
#include "Karateka.h"

// ƒRƒ“ƒXƒgƒ‰ƒNƒ^‚Ì’è‹`
Sumo::Sumo(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Sumo::WinSumo(Sumo * opponent)
{
	// Ž©•ª‚ÌŸ‚¿”‚ð‚P‘‚â‚·
	countWin++;
	// ‘Îí‘ŠŽè‚Ì•‰‚¯”‚ð‚P‘‚â‚·
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Sumo::WinKarateka(Karateka * opponent)
{
	// Ž©•ª‚ÌŸ‚¿”‚ð‚P‘‚â‚·
	countWin++;
	// ‘Îí‘ŠŽè‚Ì•‰‚¯”‚ð‚P‘‚â‚·
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

