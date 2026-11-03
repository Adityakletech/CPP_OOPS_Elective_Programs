// Program 4: Rectangle class with separate member functions to set dimensions, compute area, and display
#include <iostream>
using namespace std;

class Rectangle {
private:
    float width, height, rectArea;

public:
    void setValues(float w, float h) {
        width = w;
        height = h;
    }

    void calculateArea() {
        rectArea = width * height;
    }

    void display() {
        cout << "Area of the Rectangle: " << rectArea << endl;
    }
};

int main() {
    Rectangle rect;
    float w, h;

    cout << "Enter width of the rectangle: ";
    cin >> w;
    cout << "Enter height of the rectangle: ";
    cin >> h;

    rect.setValues(w, h);
    rect.calculateArea();
    rect.display();

    return 0;
}
