#include <iostream>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int n;
    int sum;

    cout << "Enter the numbers you want to find the sum : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout<<sum;


    //check for prime number

    int n = 0;
    int r;

    cout<<"Enter to check number is prime or not : ";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        r = n%i;
        if(r == 0){
            cout<<"Number is not prime";
            exit(0);
        }
    }
    cout<<"Number is prime";


    //factorial
    int n, fact = 1;

    cout<<"Enter the number  : ";
    cin>>n;

    for(int i = n; i >= 1; i--){
        fact *= i;
    }

    cout<<fact;

    return 0;
}
