// Program 2: Multi-level inheritance demonstrating protected member functions in the base class
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int wheels = 4;
    int doors = 4;

protected:
    void showVehicle() {
        cout << "Vehicle -> Wheels: " << wheels << ", Doors: " << doors << endl;
    }
};

class Car : public Vehicle {
private:
    string color = "Red";
    string bodyType = "Coupe";

public:
    void showCar() {
        showVehicle(); // Accessible inside derived class because it is protected
        cout << "Car     -> Color: " << color << ", Type: " << bodyType << endl;
    }
};

class SportsCar : public Car {
private:
    int engineCC = 2400;

public:
    void showSportsCar() {
        showVehicle(); // Accessible inside derived class
        cout << "Sports  -> Engine Capacity: " << engineCC << " CC" << endl;
    }
};

int main() {
    Car c;
    SportsCar sc;

    c.showCar();
    cout << endl;

    sc.showCar();
    sc.showSportsCar();

    return 0;
}
