// Program 4: Abstract class Vehicle with a pure virtual function implemented by Car and Bike
#include <iostream>
using namespace std;

class Vehicle {
public:
    float baseMileage = 12.5f;
    virtual float getMileage() = 0; // Pure virtual function
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    float getMileage() override {
        return baseMileage * 1.5f;
    }
};

class Bike : public Vehicle {
public:
    float getMileage() override {
        return baseMileage * 3.5f;
    }
};

int main() {
    Car c;
    Bike b;
    Vehicle *v1 = &c;
    Vehicle *v2 = &b;

    cout << "Car Mileage  : " << v1->getMileage() << " km/l" << endl;
    cout << "Bike Mileage : " << v2->getMileage() << " km/l" << endl;

    return 0;
}
