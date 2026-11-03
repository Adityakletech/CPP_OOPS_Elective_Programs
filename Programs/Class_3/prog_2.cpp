// Program 2: Addition of two complex numbers using class objects
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void setData() {
        cout << "Enter real and imaginary parts separated by space: ";
        cin >> real >> imag;
    }

    void print() {
        cout << "Complex Number = " << real << " + " << imag << "i" << endl;
    }

    void addComplex(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main() {
    Complex num1, num2, sum;
    num1.setData();
    num2.setData();
    sum.addComplex(num1, num2);
    sum.print();
    return 0;
}
