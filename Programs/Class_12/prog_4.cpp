// Program 4: Multiple catch blocks for different thrown exception data types (int and double)
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;
    cout << "Before try block" << endl;

    try {
        cout << "Inside try block" << endl;
        if (a == 0) {
            throw a;
        } else if (b == 0) {
            throw 0.0;
        }
    } catch (int errInt) {
        cout << "Caught int exception for first operand: " << errInt << endl;
    } catch (double errDouble) {
        cout << "Caught double exception for second operand: " << errDouble << endl;
    }

    cout << "After catch block" << endl;
    return 0;
}
