#include <iostream>
using namespace std;

class Person {
public:
    virtual void printName() { 
        cout << "Person" << endl; 
    }
};

class Man : public Person {
    public:
        void printName() {
            cout << "Sanjay" << endl;
        };
};

int main() {
    Man man;
    Person *p = &man;
    p->printName();
    return 0;
}