#pragma once

// ゲーム機
class GameMachine
{
public:
	void PowerOn();		// 電源を入れる
protected:
	int memorySize; // メモリ
	int power;		// 消費電力
	float cpuClock;	// CPU
};