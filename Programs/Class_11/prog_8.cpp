// Program 8: Unary operator overloading for prefix and postfix decrement (--)
#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 10) : value(v) {}

    // Prefix decrement (--c)
    Counter& operator--() {
        --value;
        return *this;
    }

    // Postfix decrement (c--)
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(10);
    c--;
    cout << "After postfix decrement (c--): " << c.getValue() << endl;
    --c;
    cout << "After prefix decrement (--c) : " << c.getValue() << endl;
    return 0;
}
