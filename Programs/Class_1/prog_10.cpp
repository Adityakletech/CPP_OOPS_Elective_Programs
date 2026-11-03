// Program 10: Parameter passing - Pass by Reference
#include <iostream>
using namespace std;

int sumByRef(int &p, int &q);

int main() {
    int x = 12, y = 18;
    int result = sumByRef(x, y);
    cout << "Sum (Pass by Reference) = " << result << endl;
    return 0;
}

int sumByRef(int &p, int &q) {
    return p + q;
}
