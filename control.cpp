#include <iostream>

using namespace std;

void partywithif(int age)
{

    if (age <= 18)
    {
        cout << "Your age is " << age << " and You are not allowed" << endl;
    }
    else if ((age > 18) && (age < 25))
    {
        cout << "Your age is " << age << " and You can enter in adult section" << endl;
    }
    else if ((age > 25) && (age < 80))
    {
        cout << "Go to VIP Hall" << endl;
    }
    else if (age > 80)
    {
        cout << "Your age is " << age << " and You are too old to enter" << endl;
    }
    else
    {
        cout << "Your age is " << age << " and You can enter in VIP Residence" << endl;
    }
}

int main()
{
    int age;
    cout << "Welcome! Enter your age : ";
    cin >> age;

    // partywithif(age);

    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;

    default:
        cout << "You are i don't know";
        break;
    }

    return 0;
}