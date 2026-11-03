// Program 2: Multiple inheritance with Student, Test, and Result using initializer lists
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
        cout << "Student: " << name << " (Roll No: " << rollNo << ")" << endl;
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result r1(95, 89.2f, 512, "Aditya K", 89);
    r1.display();
    return 0;
}
