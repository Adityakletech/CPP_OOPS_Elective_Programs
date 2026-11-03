// Program 3: Accessing protected data members across multi-level inheritance
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int wheels = 4;
};

class Car : public Vehicle {
protected:
    string brand = "Toyota";
};

class SportsCar : public Car {
private:
    int topSpeed = 260;

public:
    void displaySpecs() {
        cout << "Brand     : " << brand << endl;
        cout << "Wheels    : " << wheels << endl;
        cout << "Top Speed : " << topSpeed << " km/h" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.displaySpecs();
    return 0;
}
