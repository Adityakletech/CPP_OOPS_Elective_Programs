// Program 6: Demonstrating default, parameterized, and copy constructors in a Rectangle class
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &other) {
        length = other.length;
        width = other.width;
    }

    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(10, 6);
    Rectangle r3(r1);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
