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

    int n = 12;
    bool isPrime = true;

    for(int  i = 2; i*i <= n; i++){
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"Prime Number";
    }else{
        cout<<"Not Prime Number";
    }


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
