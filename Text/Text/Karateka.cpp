#include "Karateka.h"
#include "Sumo.h"

// �R���X�g���N�^�̒�`
Karateka::Karateka(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Karateka::WinKarateka(Karateka * opponent)
{
	// �����̏��������P���₷
	countWin++;
	// �ΐ푊��̕��������P���₷
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Karateka::WinSumo(Sumo * opponent)
{
	// �����̏��������P���₷
	countWin++;
	// �ΐ푊��̕��������P���₷
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

