// Program 3: Defining a member function outside the class using the scope resolution operator (::)
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int age;

public:
    void displayData(); // Member function declared inside the class

    void setData() {
        studentName = "Aditya K";
        age = 21;
    }
};

void Student::displayData() {
    cout << "Student Name : " << studentName << endl;
    cout << "Student Age  : " << age << endl;
}

int main() {
    Student st;
    st.setData();
    st.displayData();
    return 0;
}
