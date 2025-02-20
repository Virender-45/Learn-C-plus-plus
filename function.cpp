#include <iostream>

using namespace std;

int sum(int, int);
void greet();

int main(){
    greet();
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "The sum is : " << sum(num1, num2);

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void greet(){
    cout<<"Good Morning, Admin!"<<endl;
}
