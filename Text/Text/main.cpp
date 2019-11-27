#include <iostream>
#include "PS4.h"
#include "Switch.h"
using namespace std;

int main() {

	PS4* p_ps4 = new PS4;
	Switch* p_switch = new Switch;
GameMachine* p_gameMachine = new GameMachine;

p_ps4->PowerOn();
p_ps4->PlayPSVR();

p_switch->PowerOn();
p_switch->PlayPortable();

p_gameMachine->PowerOn();

delete p_ps4;
delete p_switch;
delete p_gameMachine;

	system("pause");
	return 0;
}