// Program 1: Static data member and static member function
#include <iostream>
using namespace std;

class Item {
private:
    static int count;
    int code;

public:
    static void showCount() {
        cout << "Current count value: " << count << endl;
    }

    void setData(int val) {
        code = val;
        count = code;
    }
};

int Item::count = 0;

int main() {
    Item item1, item2, item3;

    Item::showCount();
    item1.setData(100);
    Item::showCount();
    item2.setData(200);
    Item::showCount();
    item3.setData(300);
    Item::showCount();

    return 0;
}
