// Program 1: Single-level inheritance using constructor initializer lists
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    int legs;
    int eyes;

public:
    Animal(int l, int e) : legs(l), eyes(e) {}

    void showBase() {
        cout << "Base Class (Animal)" << endl;
        cout << "Legs: " << legs << ", Eyes: " << eyes << endl;
    }
};

class Dog : public Animal {
private:
    string coatColor;

public:
    Dog(int l, int e, string color) : Animal(l, e), coatColor(color) {}

    void showDerived() {
        cout << "Derived Class (Dog)" << endl;
        cout << "Coat Color: " << coatColor << endl;
    }
};

int main() {
    Dog d1(4, 2, "Golden");
    d1.showBase();
    d1.showDerived();
    return 0;
}
