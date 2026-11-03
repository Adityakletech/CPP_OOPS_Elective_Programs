// Program 1: Rectangle class demonstrating constructors and a destructor
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

    ~Rectangle() {
        // Destructor called automatically when object goes out of scope
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(8, 4);
    Rectangle r3(r1);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
