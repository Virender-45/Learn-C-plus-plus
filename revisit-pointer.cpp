#include <iostream>

using namespace std;

int main()
{
    // Basic Pointer

    int a = 5;
    int *ptr = &a;
    cout << *(ptr) << endl;

    // new keyword
    int *p = new int(40);
    cout << *(p) << endl;

    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    *(arr + 3) = 40;
    cout<<"arr[0] = "<< arr[0]<<endl;
    cout<<"arr[1] = "<< arr[1]<<endl;
    cout<<"arr[2] = "<< arr[2]<<endl;
    cout<<"arr[3] = "<< arr[3]<<endl;

    //Delete operator
    delete [] arr;

    return 0;
}
