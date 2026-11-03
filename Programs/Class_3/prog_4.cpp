// Program 4: Default and parameterized constructors for Employee records
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId, salary;
    string empName, department;

public:
    Employee() {
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    Employee(int id, int sal, string name, string dept) {
        empId = id;
        salary = sal;
        empName = name;
        department = dept;
    }

    void printDetails() {
        cout << "\n--- Employee Record ---" << endl;
        cout << "Name       : " << empName << endl;
        cout << "ID         : " << empId << endl;
        cout << "Salary     : " << salary << endl;
        cout << "Department : " << department << endl;
    }
};

int main() {
    Employee empParam(101, 45000, "Aditya", "ECE");
    Employee empInput;

    empInput.printDetails();
    empParam.printDetails();

    return 0;
}
