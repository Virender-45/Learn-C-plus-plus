#include <iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        //Creating a constructor, it is a special member function tith same name as class
        //It is used to initializ the objects of the class
        //It is automatically invoked whenever a object is created
        Complex(void);

        void printNumber(){
            cout<<"The number is : "<<a <<" + "<<b<<"i"<<endl;
        }
};

Complex::Complex(void){ //It is a default constructor 
    a = 10;
    b = 12;
}

int main(){
    Complex o1;
    o1.printNumber();    

    return 0;
}
