#include <iostream>
#include "Test.h"
using namespace std;

Test::Test()
{
	cout << "Test‚ª¶‚Ü‚ê‚½" << endl;
	a = new int(10);
}


Test::~Test()
{
	cout << "Test‚ªÁ‚¦‚½" << endl;
	delete a;
}

Test::Test(const Test & obj)
	: name(obj.name)
{
	a = new int(*obj.a);
	//name = obj.name;
	cout << "ƒRƒs[" << endl;
}

void Test::Echo()
{
	cout << name << *a << endl;
}
