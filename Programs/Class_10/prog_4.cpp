// Program 4: Comparing base pointer virtual dispatch and direct object calls
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2" << endl;
    }
};

int main() {
    Base *ptr;
    Base b;
    Derived1 d1;
    Derived2 d2;

    ptr = &d2;
    ptr->show();

    b.show();
    d1.show();
    d2.show();

    return 0;
}
