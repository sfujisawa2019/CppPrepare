#include "Slime.h"
#include <iostream>
using namespace std;

// コンストラクタ（定義）
Slime::Slime()
{
	name = "スライム";

	cout << name << "が生まれた" << endl;
}

// デストラクタ（定義）
Slime::~Slime()
{
	cout << name << "が消滅した" << endl;
}

// 攻撃（定義）
void Slime::Attack()
{
	cout << name << "の体当たり！" << endl;
}
