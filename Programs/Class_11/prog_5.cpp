// Program 5: Binary + operator overloading to add two Complex numbers
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0.0f, float i = 0.0f) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void show() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5f, 2.5f), c2(4.5f, 5.5f);
    Complex sum = c1 + c2;
    sum.show();
    return 0;
}
