// Program 4: Common friend function accessing private members of two different classes (ABC and XYZ)
#include <iostream>
using namespace std;

class XYZ; // Forward declaration

class ABC {
private:
    int numA;

public:
    void setDataABC(int val) {
        numA = val;
    }

    void display() {
        cout << "Value in class ABC: " << numA << endl;
    }

    friend int add(ABC, XYZ);
};

class XYZ {
private:
    int numB;

public:
    void setDataXYZ(int val) {
        numB = val;
    }

    void display() {
        cout << "Value in class XYZ: " << numB << endl;
    }

    friend int add(ABC, XYZ);
};

int add(ABC objA, XYZ objB) {
    return objA.numA + objB.numB;
}

int main() {
    ABC a;
    XYZ b;

    a.setDataABC(14);
    a.display();

    b.setDataXYZ(26);
    b.display();

    cout << "Sum of ABC and XYZ values = " << add(a, b) << endl;
    return 0;
}
