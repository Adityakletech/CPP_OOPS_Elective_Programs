// Program 6: Binary - operator overloading to subtract two Complex numbers
#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0.0f, float i = 0.0f) : real(r), imag(i) {}

    Complex operator-(const Complex &other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void show() const {
        cout << real << " + (" << imag << ")i" << endl;
    }
};

int main() {
    Complex c1(6.0f, 3.0f), c2(4.0f, 5.0f);
    Complex diff = c1 - c2;
    diff.show();
    return 0;
}
