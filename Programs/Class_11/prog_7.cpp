// Program 7: Unary operator overloading for prefix and postfix increment (++)
#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Prefix increment (++c)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment (c++)
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(10);
    c++;
    cout << "After postfix increment (c++): " << c.getValue() << endl;
    ++c;
    cout << "After prefix increment (++c) : " << c.getValue() << endl;
    return 0;
}
