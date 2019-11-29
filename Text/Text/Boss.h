#pragma once
#include "Monster.h"

// スライムクラスの定義
class Boss : public Monster
{
	using string = std::string;
public: /* メンバ関数 */
	// コンストラクタ（宣言）
	Boss();
	// デストラクタ（宣言）
	~Boss();
	// 攻撃（宣言）
	void Attack();
private: /* メンバ変数 */
};