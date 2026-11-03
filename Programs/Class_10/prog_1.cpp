// Program 1: Diamond inheritance problem (illustrating base member ambiguity)
// Note: Accessing obj.i directly is ambiguous without virtual inheritance; scope resolution (obj.B::i) or virtual base class resolves it.
#include <iostream>
using namespace std;

class A {
public:
    int i;
};

class B : public A {
public:
    int j;
};

class C : public A {
public:
    int k;
};

class D : public B, public C {
public:
    int sum;
};

int main() {
    D obj;
    obj.B::i = 10; // Disambiguated via B::i (or use virtual inheritance as shown in prog_2.cpp)
    obj.j = 20;
    obj.k = 30;
    obj.sum = obj.B::i + obj.j + obj.k;
    cout << "The Sum is: " << obj.sum << endl;
    return 0;
}
