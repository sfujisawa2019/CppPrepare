#include <iostream>
#include "PS4.h"
using namespace std;

void PS4::PlayPSVR()
{
	cout << "PSVRで遊びます" << endl;

	// これはエラーになる
	cout << memorySize << endl;
}
