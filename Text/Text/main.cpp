#include <iostream>
#include "Pokemon.h"
using namespace std;

int main() {

Pokemon* pokemon1;

/* �|�P�����P�ɂ���*/
pokemon1 = new Pokemon("�R�C�L���O");
// ���܂��
pokemon1->Birth();
pokemon1->weapon.name = "�G�N�X�J���o�[";
// �q���|�P�������Y��
pokemon1->Bear();

delete pokemon1;

	system("pause");
	return 0;
}