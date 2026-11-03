// Program 5: Streamlined Rectangle class where area() directly returns the computed value
#include <iostream>
using namespace std;

class Rectangle {
private:
    float width, height;

public:
    void setValues(float w, float h) {
        width = w;
        height = h;
    }

    float area() {
        return width * height;
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
    cout << "Area of the Rectangle = " << rect.area() << endl;

    return 0;
}
