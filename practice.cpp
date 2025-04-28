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

    return 0;
}
