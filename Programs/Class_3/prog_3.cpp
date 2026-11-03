// Program 3: Default constructor initializing employee ID and department
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string department;

public:
    Employee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Department: ";
        cin >> department;
    }

    void display() {
        cout << "\nEmployee ID : " << empId << "\nDepartment  : " << department << endl;
    }
};

int main() {
    Employee emp1, emp2;
    emp1.display();
    emp2.display();
    return 0;
}
