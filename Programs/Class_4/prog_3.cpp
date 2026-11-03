// Program 3: Using a static counter to assign a unique employee ID to each object
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    static int counter;
    int emp_id;
    string emp_name, emp_dept;

public:
    Employee() {
        emp_id = ++counter;
    }

    void display() {
        cout << "Employee ID: " << emp_id << endl;
    }
};

int Employee::counter = 0;

int main() {
    Employee e1, e2, e3, e4, e5;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    return 0;
}
