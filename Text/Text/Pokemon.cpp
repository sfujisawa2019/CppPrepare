#include <iostream>
#include "Pokemon.h"
using namespace std;

// コンストラクタの定義
Pokemon::Pokemon() {
	name = "ポケモン";
	child = nullptr;
}

// 引数付きコンストラクタの定義
Pokemon::Pokemon(string name) {
	this->name = name;
	child = nullptr;
}

Pokemon::~Pokemon() {
	// 子供ポケモンを解放
	if (child) {
		cout << child->name << "を解放します" << endl;
		delete child;
	}
	cout << this->name << "は消えます（デストラクタ）" << endl;
}

void Pokemon::Birth() {
	cout << "卵から" << name << "が生まれた" << endl;
}

void Pokemon::Bear()
{
	// インスタンス生成
	child = new Pokemon(name + "２世");

	cout << name << "は子供ポケモンを産んだ" << endl;
	child->Birth();
}