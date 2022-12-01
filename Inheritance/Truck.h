#pragma once
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;
class Truck : public Vehicle {

private:
	int towCapacity;

public:
	Truck(int, int, string);
	int getTowCapacity();
	void setTowCapacity(int);

	void displayInfo();

};