#include <iostream>
#include "Sumo.h"
#include "Karateka.h"
using namespace std;

int main() {

Sumo* sumo1 = new Sumo("���Q");
Karateka* karateka1 = new Karateka("��R");

// sumo1��karateka1�ɏ���
sumo1->WinKarateka(karateka1);
	
delete sumo1;
delete karateka1;

	system("pause");
	return 0;
}