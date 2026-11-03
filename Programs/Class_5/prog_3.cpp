// Program 3: Friend function accepting both a class object and an additional parameter
#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int addWithBonus(Numbers obj, int bonus);
};

int addWithBonus(Numbers obj, int bonus) {
    return obj.num1 + obj.num2 + bonus;
}

int main() {
    Numbers n1;
    n1.setData(10, 20);
    cout << "Total sum with bonus = " << addWithBonus(n1, 5) << endl;
    return 0;
}
