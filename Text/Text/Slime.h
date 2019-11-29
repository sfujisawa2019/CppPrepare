#pragma once
#include "Monster.h"

// スライムクラスの定義
class Slime : public Monster
{
	using string = std::string;
public: /* メンバ関数 */
	// コンストラクタ（宣言）
	Slime();
	// デストラクタ（宣言）
	~Slime();
	// 攻撃（宣言）
	void Attack();
private: /* メンバ変数 */
};