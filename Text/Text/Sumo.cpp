#include "Sumo.h"
#include "Karateka.h"

// �R���X�g���N�^�̒�`
Sumo::Sumo(string name)
{
	this->name = name;
	countWin = 0;
	countLose = 0;
}

void Sumo::WinSumo(Sumo * opponent)
{
	// �����̏��������P���₷
	countWin++;
	// �ΐ푊��̕��������P���₷
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

void Sumo::WinKarateka(Karateka * opponent)
{
	// �����̏��������P���₷
	countWin++;
	// �ΐ푊��̕��������P���₷
	opponent->SetCountLose(opponent->GetCountLose() + 1);
}

