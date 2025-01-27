#include <iostream>
using namespace std;

class Complex{
    int a, b;

public:
    void setData(int r, int i){
        a = r;
        b = i;
    }
    void display(){
        cout << "The real number is : " << a << endl;
        cout << "The imaginary number is : " << b << endl;
    }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // c1.setData(1, 2);
    // c1.dispplay();

    // (*ptr).setData(11, 22);
    // (*ptr).display();

    ptr->setData(1, 4);
    ptr->display();

    return 0;
}
