#include "Truck.h"
#include "Vehicle.h"
#include "Vehicle.cpp"
#include <iostream>

using namespace std;

Truck::Truck(int towCapacity, int yearBuilt, string manufacturer): towCapacity(towCapacity), Vehicle(manufacturer, yearBuilt) {
	this->towCapacity = towCapacity;
}

int Truck::getTowCapacity() {
	return towCapacity;
}

void Truck::setTowCapacity(int towCapacity) {
	this->towCapacity = towCapacity;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nTow Capacity: " << towCapacity;

}