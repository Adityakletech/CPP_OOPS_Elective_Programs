// Program 1: Binary + operator overloading to concatenate two strings
#include <iostream>
#include <string>
using namespace std;

class StringConcat {
private:
    string text;

public:
    StringConcat(string s = "") : text(s) {}

    StringConcat operator+(const StringConcat &other) const {
        return StringConcat(text + other.text);
    }

    void show() const {
        cout << text << endl;
    }
};

int main() {
    StringConcat s1("Hello "), s2("World");
    StringConcat combined = s1 + s2;
    combined.show();
    return 0;
}
