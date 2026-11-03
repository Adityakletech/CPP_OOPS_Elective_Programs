// Program 9: Parameter passing - Pass by Value
#include <iostream>
using namespace std;

int sumValues(int p, int q);

int main() {
    int x = 12, y = 18;
    int result = sumValues(x, y);
    cout << "Sum (Pass by Value) = " << result << endl;
    return 0;
}

int sumValues(int p, int q) {
    return p + q;
}
