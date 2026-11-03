// Program 5: Find the largest number in an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {14, 7, 29, 12, 45, 18, 33, 9, 51, 22};
    int n = 10;
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "The largest element in the list is: " << maxVal << endl;
    return 0;
}
