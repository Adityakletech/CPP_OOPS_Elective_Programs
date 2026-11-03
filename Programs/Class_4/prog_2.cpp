// Program 2: Static data member shared across all objects of a class
// Note: Because emp_id is static, all objects share the same final value after 5 objects are created.
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    static int emp_id;
    string emp_name, emp_dept;

public:
    Employee() {
        emp_id++;
    }

    void display() {
        cout << "Employee ID (shared static): " << emp_id << endl;
    }
};

int Employee::emp_id = 0;

int main() {
    Employee e1, e2, e3, e4, e5;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    return 0;
}
