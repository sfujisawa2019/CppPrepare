#include <iostream>
#include "Human.h"
using namespace std;

int main() {

	// ローカル変数のスコープ
	{
		Human human1("ドラえもん");
		Human human2("のび太");

		human1.MakeHenchman();

		human2 = human1;
	}

	//Human* human1 = new Human("ドラえもん");
	//Human* human2 = new Human(*human1);

	//human1->Introduce();
	//human2->Introduce();

	//delete human1;
	//delete human2;

	system("pause");
	return 0;
}