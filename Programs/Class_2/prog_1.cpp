// Program 1: Creating a class and accessing private members via member functions
#include <iostream>
using namespace std;

class Test {
private:
    int totalMarks;
    float sgpa;

public:
    void setData() {
        totalMarks = 425;
        sgpa = 8.5f;
    }

    void displayData() {
        cout << "Marks = " << totalMarks << endl;
        cout << "SGPA  = " << sgpa << endl;
    }
};

int main() {
    Test obj;
    obj.setData();
    obj.displayData();
    return 0;
}
