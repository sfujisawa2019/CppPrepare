#include <iostream>
#include "Human.h"
using namespace std;

int main() {

	// ���[�J���ϐ��̃X�R�[�v
	{
		Human human1("�h��������");
		Human human2("�̂ё�");

		human1.MakeHenchman();

		human2 = human1;
	}

	//Human* human1 = new Human("�h��������");
	//Human* human2 = new Human(*human1);

	//human1->Introduce();
	//human2->Introduce();

	//delete human1;
	//delete human2;

	system("pause");
	return 0;
}