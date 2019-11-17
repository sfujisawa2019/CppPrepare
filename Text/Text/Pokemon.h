#pragma once
#include <string>
#include "Weapon.h"

// ポケモンクラス
class Pokemon
{
	using string = std::string;
public:
	// コンストラクタの宣言
	Pokemon();
	// 引数付きコンストラクタの宣言
	Pokemon(std::string name);
	// デストラクタの宣言
	~Pokemon();
	// 生まれる
	void Birth();
	// 子供ポケモンを産む
	void Bear();
public:
	// 名前
	std::string name;
	// 子供ポケモンのポインタ
	Pokemon* child;
	// ポケモンが持つ武器
	Weapon weapon;
};