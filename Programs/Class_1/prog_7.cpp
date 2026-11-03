// Program 7: Check whether a C-style string is a palindrome
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[] = "LEVEL";
    int len = strlen(word);

    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
    }

    cout << "The string is a palindrome." << endl;
    return 0;
}
