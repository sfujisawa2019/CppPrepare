#include <iostream>
#include "Sumo.h"
#include "Karateka.h"
using namespace std;

int main() {

Sumo* sumo1 = new Sumo("白鵬");
Karateka* karateka1 = new Karateka("大山");

// sumo1がkarateka1に勝利
sumo1->WinKarateka(karateka1);
	
delete sumo1;
delete karateka1;

	system("pause");
	return 0;
}