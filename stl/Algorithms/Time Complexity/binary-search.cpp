#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            return mid;
        }
    }
}



int main()
{
    int arr[10] = {3, 5, 7, 1, 9, 8, 2, 4, 6, 10};
    vector<int> vec = {3, 5, 7, 1, 9, 8, 2, 4, 6, 10};

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout << "\n"
         << binarySearch(arr, 0, 9, 4) << endl;
    cout << binary_search(vec.begin(), vec.end(), 4); // returns bool
    

    return 0;
}
