// Program 3: Multiple inheritance demonstrating why default constructors are needed
// when creating unparameterized base objects (resolved in prog_4.cpp)
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student() : rollNo(0), name("Unassigned") {}
    Student(int r, string n) : rollNo(r), name(n) {}
};

class Test {
private:
    int marks;

public:
    Test() : marks(0) {}
    Test(int m) : marks(m) {}
};

class Result : public Student, public Test {
private:
    int totalMarks;
    float percentage;

public:
    Result(int total, float perc, int r, string n, int m)
        : Student(r, n), Test(m), totalMarks(total), percentage(perc) {}

    void display() {
        cout << "Total Marks : " << totalMarks << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
    }
};

int main() {
    Student s1;
    Test t1;
    Result r1(94, 88.5f, 512, "Aditya K", 88);
    r1.display();
    return 0;
}
