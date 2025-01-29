#include <iostream>
using namespace std;

class Base{
public:
    int var_base = 10;
    virtual void display(){ //create virtual fucntion
        cout << "Displaying base class var : " << var_base << endl;
    }
};

class Derived : public Base{
public:
    int var_derived = 20;
    void display(){
        cout << "Displaying base class var : " << var_base << endl;
        cout << "Displaying derived class var : " << var_derived << endl;
    }
};

int main(){
    Base base_obj;
    Base* base_ptr;
    Derived derived_obj;
    base_ptr = &derived_obj;    //Point the base class pointer to derived class object

    base_ptr->display();

    return 0;
}
