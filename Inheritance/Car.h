#pragma once
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;
class Car : public Vehicle{

private:
	int doorNum;

public:
	Car(int, int, string);
	int getDoorNum();
	void setDoorNum(int);

	void displayInfo();

};