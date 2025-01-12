#include <iostream>
using namespace std;

//Forward Declaration
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a + b);
        }
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
};

class Complex{
    int a, b;

    //Individually declaring function as friend 
    // friend int Calculator::sumRealComplex(Complex, Complex);
    // friend int Calculator::sumCompComplex(Complex, Complex);

    //Declaring entire Calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout << "Your complex numbers is : " << a << " + " << b << "i" << endl;
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2){
            return (o1.a + o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2){
            return (o1.b + o2.b);
}

int main(){
    Complex c1,c2;
    c1.setNumber(1, 2);
    c1.printNumber();
    c2.setNumber(3, 4);
    c2.printNumber();

    Calculator c;
    int res = c.sumRealComplex(c1, c2);
    int resc = c.sumCompComplex(c1, c2);

    cout<<res<<" + "<<resc<<"i"<<endl;

    return 0;
}
