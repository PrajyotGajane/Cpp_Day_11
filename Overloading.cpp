#include <iostream>
using namespace std;

void print(int value) {
    cout << "Integer value is : " << value << endl;
}

void print(double value) {
    cout << "Double value is : " << value << endl;
}

int main() {
    print(5);
    print(10.5);
    return 0;
}