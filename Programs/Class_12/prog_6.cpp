// Program 6: Demonstrating why throwing the exception before performing division is critical
// (Performing integer division by zero before the throw triggers a hardware/OS arithmetic trap)
#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    int quotient = 0;
    if (denominator == 0) {
        throw "Error: Division by zero condition detected!";
    }
    quotient = numerator / denominator;
    return quotient;
}

int main() {
    int x = 50, y = 0;
    double result = 0.0;

    try {
        result = divide(x, y);
        cout << "Result = " << result << endl;
    } catch (const char *msg) {
        cout << msg << endl;
    }

    return 0;
}
