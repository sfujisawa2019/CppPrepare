#include <iostream>
#include "Pokemon.h"
using namespace std;

int main() {

Pokemon* pokemon1;

/* ポケモン１について*/
pokemon1 = new Pokemon("コイキング");
// 生まれる
pokemon1->Birth();
pokemon1->weapon.name = "エクスカリバー";
// 子供ポケモンを産む
pokemon1->Bear();

delete pokemon1;

	system("pause");
	return 0;
}