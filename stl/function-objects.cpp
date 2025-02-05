#include <iostream>
#include <functional>    //for greater
#include <algorithm>

using namespace std;

int main()
{
    // Function Objects(functor): function wrapped in a class so that it available like an object
    int arr[] = {4, 8, 2, 32, 1, 6};
    int n = 6;

    sort(arr, arr+n, greater<int>());

    for (int val : arr)
    {
        cout << val << endl;
    }

    return 0;
}
