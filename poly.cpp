#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Function 1" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Function 2" << endl;
    return a + b + c;
}
int volume(double r, int h)
{ // cylinder
    return (3.14 * r * r * h);
}
int volume(int a)
{ // Cube
    return (a * a * a);
}
int volume(int l, int b, int h)
{ // Rectangle
    return (l * b * h);
}

int main()
{

    // cout << "The sum of 3 and 6 is : " << sum(3, 6) << endl;
    // cout << "The sum of 3, 6, 9 is : " << sum(3, 6, 9) << endl;

    //Function Overloading
    cout<<"The volume of cylinder of radius 3 and height 6 is : "<<volume(3,6)<<endl;
    cout<<"The volume of cuboid of 3,7 and 6 is : "<<volume(3,7,6)<<endl;
    cout<<"The volume of cube of side 3 is : "<<volume(3)<<endl;

    return 0;
}