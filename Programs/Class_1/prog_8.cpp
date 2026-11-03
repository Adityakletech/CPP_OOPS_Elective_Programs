// Program 8: Check whether a C++ string is a palindrome
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "MADAM";
    string rev = "";
    int len = str.length();

    for (int i = len - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
