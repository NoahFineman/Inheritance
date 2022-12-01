#include "Car.h"
#include "Vehicle.h"
#include "Vehicle.cpp"

using namespace std;

Car::Car(int doorNum, int yearBuilt, string manufacturer):Vehicle(manufacturer, yearBuilt) {
	this->doorNum = doorNum;
}

int Car::getDoorNum() {
	return doorNum;
}

void Car::setDoorNum(int doorNum) {
	this->doorNum = doorNum;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "\nDoors: " << doorNum;

}