#include "Monster.h"
#include <iostream>
using namespace std;

// コンストラクタ（定義）
Monster::Monster()
{
	//cout << "モンスター発生" << endl;
}

// デストラクタ（定義）
Monster::~Monster()
{
	//cout << "モンスター消滅" << endl;
}

// 攻撃（定義）
void Monster::Attack()
{
	cout << "モンスター攻撃" << endl;
}
