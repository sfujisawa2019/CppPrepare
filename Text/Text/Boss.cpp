#include "Boss.h"
#include <iostream>
using namespace std;

// コンストラクタ（定義）
Boss::Boss()
{
	name = "魔王ハーゴン";

	cout << name << "が生まれた" << endl;
}

// デストラクタ（定義）
Boss::~Boss()
{
	cout << name << "が消滅した" << endl;
}

// 攻撃（定義）
void Boss::Attack()
{
	cout << name << "の火炎の息！" << endl;
}
