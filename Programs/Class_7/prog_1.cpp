// Program 1: Multi-level inheritance with Vehicle, Car, and SportsCar classes
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int wheels = 4;
    int doors = 4;

public:
    void showVehicle() {
        cout << "Vehicle -> Wheels: " << wheels << ", Doors: " << doors << endl;
    }
};

class Car : public Vehicle {
private:
    string color = "Silver";
    string bodyType = "Sedan";

public:
    void showCar() {
        cout << "Car     -> Color: " << color << ", Type: " << bodyType << endl;
    }
};

class SportsCar : public Car {
private:
    int engineCC = 2000;

public:
    void showSportsCar() {
        cout << "Sports  -> Engine Capacity: " << engineCC << " CC" << endl;
    }
};

int main() {
    Vehicle v;
    Car c;
    SportsCar sc;

    v.showVehicle();
    cout << endl;

    c.showVehicle();
    c.showCar();
    cout << endl;

    sc.showVehicle();
    sc.showCar();
    sc.showSportsCar();

    return 0;
}
