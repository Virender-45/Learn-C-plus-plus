#include <iostream>
#include <iomanip> // To use setw()

using namespace std;

int main()
{
    int a,b,sum;

    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    sum = a + b;
    cout<<"The sum is = "<<sum<<endl;

    cout<<"Enter any key to exit";

    Referrence Variable

    float x = 3.14;
    float & y = x;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;

    Typecasting

    int a = 10;
    float b = 10.11f;

    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    Operator Precedence
      int a = 1,b = 5;
      int c = ((((a*5)+b)-45)+87);

    (5 + (3 * 2))
    ((5 + 3) * 2)
    ((10 / 2) + (3 * 4))

    return 0;
}
