/* 4. Dynamic Memory Allocation
Write a program that:
* Dynamically allocates memory for an array of integers using pointers.
* Takes input from the user to fill the array.
* Finds the maximum and minimum numbers in the array. */

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)   
    {
        cout << "Enter arr[" << i << "] : ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "The maximum number is array is : " << max << endl;
    cout << "The minimum number is array is : " << min << endl;

    return 0;
}
