// Program 5: Multiple inheritance student result system for 3 subjects
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    Student(int roll, string studentName) : rollNo(roll), name(studentName) {
        cout << "Initialized Student -> Roll No: " << rollNo << ", Name: " << name << endl;
    }

    void displayStudent() {
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }
};

class Test {
protected:
    int marks[3];

public:
    void inputMarks() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() {
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << " Marks: " << marks[i] << endl;
        }
    }
};

class Result : public Student, public Test {
public:
    Result(int roll, string studentName) : Student(roll, studentName) {}

    int calculateTotal() {
        return marks[0] + marks[1] + marks[2];
    }

    double calculatePercentage() {
        return calculateTotal() / 3.0;
    }

    void displayResult() {
        displayStudent();
        displayMarks();
        cout << "Total Marks : " << calculateTotal() << endl;
        cout << "Percentage  : " << calculatePercentage() << "%" << endl;
    }
};

int main() {
    Result res(512, "Aditya K");
    res.inputMarks();
    res.displayResult();
    return 0;
}
