#pragma once
#include <iostream>

using namespace std;

class Vehicle {

private: 
	string manufacturer;
	int yearBuilt;

public:
	Vehicle (string, int);

	string getManufacturer();
	void setManufacturer(string);
	int getYearBuilt();
	void setYearBuilt(int);
	void displayInfo();
};
