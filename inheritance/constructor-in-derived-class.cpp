#include <iostream>

using namespace std;

class Base1{
    int data1;

public:
    Base1(int a){
        data1 = a;
        cout << "The Base 1 contructor called " << endl;
    }
    void printData(void){
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
    void printData(void){
        cout << "The data 2 value is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
        derived1 = c;
        derived2 = d;
    }
    void printData(void){
        cout << "The derived 1 value is : " << derived1 << endl;
        cout << "The derived 2 value is : " << derived2 << endl;
    }
};

int main(){

    return 0;
}
