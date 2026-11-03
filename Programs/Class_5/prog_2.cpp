// Program 2: Friend function accessing private members of a class
#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;

public:
    void setData(int a, int b);
    friend int addNumbers(Numbers obj);
};

void Numbers::setData(int a, int b) {
    num1 = a;
    num2 = b;
}

int addNumbers(Numbers obj) {
    return obj.num1 + obj.num2;
}

int main() {
    Numbers n1;
    n1.setData(15, 25);
    cout << "Sum of the two numbers = " << addNumbers(n1) << endl;
    return 0;
}
