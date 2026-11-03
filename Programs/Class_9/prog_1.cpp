// Program 1: Multiple inheritance using Liquid, Fuel, and Petrol classes
#include <iostream>
#include <string>
using namespace std;

class Liquid {
protected:
    int volume;

public:
    void showLiquid() {
        cout << "Category: Liquid" << endl;
    }
};

class Fuel {
protected:
    string category;

public:
    void showFuel() {
        cout << "Category: Fuel" << endl;
    }
};

class Petrol : public Liquid, public Fuel {
private:
    string grade;

public:
    void showPetrol() {
        cout << "Derived : Petrol" << endl;
    }
};

int main() {
    Liquid l;
    Fuel f;
    Petrol p;

    l.showLiquid();
    f.showFuel();
    cout << endl;

    p.showPetrol();
    p.showFuel();
    p.showLiquid();

    return 0;
}
