// Program 3: Exception handling when multiplying two numbers where an operand is zero
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 0;
    cout << "Before try block" << endl;

    try {
        cout << "Inside try block" << endl;
        if (a == 0) {
            throw a;
        } else if (b == 0) {
            throw b;
        }
        cout << "Product = " << (a * b) << endl;
    } catch (int zeroVal) {
        cout << "Exception caught: operand is zero (" << zeroVal << ")" << endl;
    }

    cout << "After catch block" << endl;
    return 0;
}
