// Program 11: Parameter passing - Pass by Pointer
#include <iostream>
using namespace std;

int sumByPtr(int *p, int *q);

int main() {
    int x = 12, y = 18;
    int result = sumByPtr(&x, &y);
    cout << "Sum (Pass by Pointer) = " << result << endl;
    return 0;
}

int sumByPtr(int *p, int *q) {
    return (*p + *q);
}
