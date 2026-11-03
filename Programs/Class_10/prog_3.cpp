// Program 3: Runtime polymorphism (late binding) using virtual functions and base class pointer
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show()" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show()" << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;
    Base *ptr;

    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}
