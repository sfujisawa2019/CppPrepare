#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(string name)
{
	this->name = name;
	henchman = nullptr;
	cout << name << "が生まれた" << endl;
}

Human::~Human()
{
	delete henchman;
	cout << name << "が死んだ" << endl;
}

Human::Human(const Human& obj)
{
	cout << obj.name << "をコピーします" << endl;

	// 名前をコピー
	name = obj.name;

	// 子分がいれば
	if (obj.henchman) {
		// 子分をクローン
		henchman = new Human(*obj.henchman);
	}
}

Human& Human::operator=(const Human & obj)
{
	cout << obj.name << "を代入演算子でコピーします" << endl;

	// 名前をコピー
	name = obj.name;

	// 子分がいれば
	if (obj.henchman) {
		// 子分をクローン
		henchman = new Human(*obj.henchman);
	}

	return *this;
}

void Human::Introduce()
{
	cout << "私は" << name << "です" << endl;
}

void Human::MakeHenchman()
{
	henchman = new Human(name + "の子分");
}
