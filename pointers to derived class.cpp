#include <iostream>
using namespace std;

class Base{
public:
    int var_base;
    void display(){
        cout << "Displaying base class var : " << var_base << endl;
    }
};

class Derived : public Base{
public:
    int var_derived;
    void display(){
        cout << "Displaying base class var : " << var_base << endl;
        cout << "Displaying derived class var : " << var_derived << endl;
    }
};

int main(){
    Base* base_ptr;
    Base base_obj;
    Derived derived_obj;
    base_ptr = &derived_obj;

    base_ptr->var_base = 10;
    base_ptr->display();        //Even it is pointing to derived class it will invoke the base class functions, this is the rule
    
    Derived * derived_ptr;
    derived_ptr = &derived_obj;     //can access both classes members



    return 0;
}
