#pragma once

// �Q�[���@
class GameMachine
{
public:
	void PowerOn();		// �d��������
protected:
	int memorySize; // ������
	int power;		// ����d��
	float cpuClock;	// CPU
};