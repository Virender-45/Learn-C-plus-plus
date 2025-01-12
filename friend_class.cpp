#include <iostream>
using namespace std;

//Forward Declaration
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a + b);
        }
        int sumRealComplex(Complex o1, Complex o2);
};

class Complex{
    int a, b;
    friend int Calculator::sumRealComplex(Complex, Complex);
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

int main(){
    Complex c1,c2;
    c1.setNumber(1, 2);
    c1.printNumber();
    c2.setNumber(3, 4);
    c2.printNumber();

    Calculator c;
    int res = c.sumRealComplex(c1, c2);

    cout<<res;

    return 0;
}