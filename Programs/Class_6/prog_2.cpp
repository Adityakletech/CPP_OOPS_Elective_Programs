// Program 2: Multi-level inheritance using Person, Student, and IT_Student
#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person Class" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student Class" << endl;
    }
};

class IT_Student : public Student {
public:
    void showITStudent() {
        cout << "IT_Student Class" << endl;
    }
};

int main() {
    Person p;
    Student s;
    IT_Student it;

    p.showPerson();
    cout << endl;

    s.showStudent();
    s.showPerson();
    cout << endl;

    it.showITStudent();
    it.showStudent();
    it.showPerson();

    return 0;
}
