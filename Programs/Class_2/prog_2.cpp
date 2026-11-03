// Program 2: Student class storing name and age
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int age;

public:
    void setData() {
        studentName = "Aditya K";
        age = 21;
    }

    void displayData() {
        cout << "Student Name : " << studentName << endl;
        cout << "Student Age  : " << age << endl;
    }
};

int main() {
    Student st;
    st.setData();
    st.displayData();
    return 0;
}
