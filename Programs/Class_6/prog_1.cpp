// Program 1: Single-level inheritance using Animal and Dog classes
#include <iostream>
using namespace std;

class Animal {
private:
    int legs = 4;

public:
    void showAnimal() {
        cout << "Number of legs: " << legs << endl;
    }
};

class Dog : public Animal {
private:
    bool hasTail = true;

public:
    void showDog() {
        cout << "Has tail: " << hasTail << endl;
    }
};

int main() {
    Dog d1;
    d1.showAnimal();
    d1.showDog();
    return 0;
}
