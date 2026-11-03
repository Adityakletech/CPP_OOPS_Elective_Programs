// Program 5: Handling division by zero using try, throw, and catch
#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Error: Division by zero is not allowed!";
    }
    return static_cast<double>(numerator) / denominator;
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
