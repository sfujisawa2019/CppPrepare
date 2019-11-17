#include "Karateka.h"
#include "Sumo.h"

// ƒRƒ“ƒXƒgƒ‰ƒNƒ^‚Ì’è‹`
Karateka::Karateka(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Karateka::WinKarateka(Karateka * opponent)
{
	// Ž©•ª‚ÌŸ‚¿”‚ð‚P‘‚â‚·
	countWin++;
	// ‘Îí‘ŠŽè‚Ì•‰‚¯”‚ð‚P‘‚â‚·
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Karateka::WinSumo(Sumo * opponent)
{
	// Ž©•ª‚ÌŸ‚¿”‚ð‚P‘‚â‚·
	countWin++;
	// ‘Îí‘ŠŽè‚Ì•‰‚¯”‚ð‚P‘‚â‚·
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

