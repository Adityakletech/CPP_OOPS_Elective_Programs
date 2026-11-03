// Program 4: Calculate the area of a rectangle from user input
#include <iostream>
using namespace std;

int main() {
    float length = 0.0f, breadth = 0.0f;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    cout << "Area of the rectangle = " << (length * breadth) << endl;
    return 0;
}
