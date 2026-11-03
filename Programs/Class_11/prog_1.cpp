// Program 1: Runtime polymorphism with Shape base class and Circle derived class
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Generic Shape" << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape *s = new Circle();
    s->draw();
    delete s;
    return 0;
}
