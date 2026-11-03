// Program 3: Multi-level inheritance demonstrating access specifiers
#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Base: Person Class" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Intermediate: Student Class" << endl;
    }
};

class IT_Student : public Student {
public:
    void showITStudent() {
        cout << "Derived: IT_Student Class" << endl;
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
