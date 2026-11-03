// Program 5: Distance class initialized using a parameterized constructor
#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    Distance(int f, int in) {
        feet = f;
        inches = in;
    }

    void display();
};

void Distance::display() {
    cout << "Distance: " << feet << " ft " << inches << " in" << endl;
}

int main() {
    Distance d1(5, 8);
    d1.display();
    return 0;
}
