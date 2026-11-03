// Program 4: Multiple inheritance using parameterized constructors and initializer lists
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    Student(int r, string n) : rollNo(r), name(n) {}
};

class Test {
protected:
    int marks;

public:
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
        cout << "Student Name : " << name << " (Roll No: " << rollNo << ")" << endl;
        cout << "Total Marks  : " << totalMarks << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
    }
};

int main() {
    Result r1(94, 88.5f, 512, "Aditya K", 88);
    r1.display();
    return 0;
}
