#include <iostream>
#include "Test.h"
using namespace std;

Test::Test()
{
	cout << "Testが生まれた" << endl;
	a = new int(10);
}


Test::~Test()
{
	cout << "Testが消えた" << endl;
	delete a;
}

Test::Test(const Test & obj)
	: name(obj.name)
{
	a = new int(*obj.a);
	//name = obj.name;
	cout << "コピー" << endl;
}

void Test::Echo()
{
	cout << name << *a << endl;
}
