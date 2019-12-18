#pragma once
#include <string>

class Human
{
	using string = std::string;
public:
	Human(string name);
	~Human();
	Human(const Human& obj);
	Human& operator=(const Human &obj);
	void Introduce();
	void MakeHenchman();
private:
	string name;
	// Žq•ª
	Human* henchman;
};

