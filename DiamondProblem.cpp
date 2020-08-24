#include <iostream>
using namespace std;

class A {
    public: 
        int a;
};

class B : A {
    public:
        int b;
};

class C : A {
    public:
        int c;
};

class D : B, C {
    public:
        int d;
};

int main() {
    D d;
    return 0;
}