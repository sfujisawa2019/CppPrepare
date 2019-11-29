#pragma once
#include <string>

// モンスタークラスの定義
class Monster
{
	using string = std::string;
public: /* メンバ関数 */
	// コンストラクタ（宣言）
	Monster();
	// デストラクタ（宣言）
	~Monster();
	// 攻撃（宣言）
	void Attack();
protected: /* メンバ変数 */
	// 名前
	string name;
};