// Program 6: Find string length using C-style and C++-style strings
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

/*
// Approach 1: C-style character array
int main() {
    char text[] = "Computer";
    int count = 0;
    while (text[count] != '\\0') {
        count++;
    }
    cout << "String length (excluding null character): " << count << endl;
    cout << "Size including null terminator: " << count + 1 << endl;
    return 0;
}
*/

// Approach 2: C++ std::string
int main() {
    string word = "Engineering";
    int len = word.length();
    cout << "Length of the string is: " << len << endl;
    return 0;
}
