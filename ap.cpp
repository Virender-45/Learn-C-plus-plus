#include <iostream>

using namespace std;


int main()
{

    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    // int arr[n];
    int* arr = new int[n]; //dynamically allocate the memory fo the array

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of arr[" << i << "] : ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] is : " << arr[i] << endl;
    }
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        a += *(arr + i);
    }
    cout << "The sum of elements of arry is : " << a << endl;

    delete[] arr;

    return 0;
}
