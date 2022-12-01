#include "Vehicle.cpp"
#include "Truck.cpp"
#include "Car.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

	string manufacturer;
	int yearBuilt, doorNum, towCapacity;

	cout << "Vehicle Program " << endl;

	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "\nEnter the year built: ";
	cin >> yearBuilt;
	cin.ignore();

	Vehicle v(manufacturer, yearBuilt);
	v.displayInfo();


    cout << "\nCar\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();

    cout << "Enter the number of doors: ";
    cin >> doorNum;
    cin.ignore();

    Car c(yearBuilt, doorNum, manufacturer);
    c.displayInfo();

    cout << "\nTruck\n";
    cout << "Enter the manufacturer:  ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore();

    cout << "Enter the towing capacity: ";
    cin >> towCapacity;
    cin.ignore();

    Truck t(yearBuilt, towCapacity, manufacturer);
    t.displayInfo();

    cout << endl;


	return 0;
}