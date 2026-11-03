// Program 2: Hierarchical polymorphism with Shape base class and Circle, Square, Triangle derived classes
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Generic Shape" << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Square" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Triangle" << endl;
    }
};

int main() {
    Shape *s1 = new Circle();
    Shape *s2 = new Square();
    Shape *s3 = new Triangle();

    s1->draw();
    s2->draw();
    s3->draw();

    delete s1;
    delete s2;
    delete s3;
    return 0;
}
