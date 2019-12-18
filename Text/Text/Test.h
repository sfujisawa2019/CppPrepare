#pragma once
#include <string>

class Test
{
public:
	using string = std::string;
	Test();
	~Test();
	Test(const Test& obj);

	void Echo();

	string name;
	int* a;
};

