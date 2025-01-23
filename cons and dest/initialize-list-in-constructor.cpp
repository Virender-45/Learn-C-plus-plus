#include <iostream>
#include <stdint.h>

using namespace std;

class Base1{
    int data1;

public:
    Base1(int a){
        data1 = a;
        cout << "The Base 1 contructor called " << endl;
    }
    void printDataBase1(void){
        cout << "The data 1 value is : " << data1 << endl;
    }
};

class Base2{
    int data2;

public:
    Base2(int a){
        data2 = a;
        cout << "The Base 2 contructor called " << endl;
    }
    void printDataBase2(void){
        cout << "The data 2 value is : " << data2 << endl;
    }
};

class Derived : public Base1, virtual public Base2{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
    }
    void printDataDerived(void){
        cout << "The derived 1 value is : " << derived1 << endl;
        cout << "The derived 2 value is : " << derived2 << endl;
    }
};

int main(){
    Derived virender(1, 2, 3, 4);

    virender.printDataBase1();
    virender.printDataBase2();
    virender.printDataDerived();

    return 0;
}
