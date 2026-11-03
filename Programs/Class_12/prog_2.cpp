// Program 2: Basic exception handling using try, throw, and catch for negative values
#include <iostream>
using namespace std;

int main() {
    int num = -5;
    cout << "Before try block" << endl;

    try {
        cout << "Inside try block" << endl;
        if (num < 0) {
            throw num;
            cout << "After throw (never executed)" << endl;
        }
    } catch (int err) {
        cout << "Exception caught: negative value = " << err << endl;
    }

    cout << "After catch block (normal execution resumes)" << endl;
    return 0;
}
