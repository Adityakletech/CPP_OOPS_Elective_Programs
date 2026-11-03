// Program 6: Multiple inheritance student result system for 5 subjects
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
    int marks[5];

public:
    void inputMarks() {
        cout << "Enter marks for 5 subjects (out of 100):" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Student, public Test {
private:
    int totalMarks;
    float percentage;

public:
    Result(int r, string n) : Student(r, n), totalMarks(0), percentage(0.0f) {}

    void computeTotal() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    void computePercentage() {
        percentage = totalMarks / 5.0f;
    }

    void displayResult() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << " Marks: " << marks[i] << endl;
        }
        cout << "Total Marks : " << totalMarks << " / 500" << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
    }
};

int main() {
    Result res(512, "Aditya K");
    res.inputMarks();
    res.computeTotal();
    res.computePercentage();
    res.displayResult();
    return 0;
}
