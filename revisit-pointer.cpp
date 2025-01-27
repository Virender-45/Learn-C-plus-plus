#include <iostream>

using namespace std;

int main()
{
    // Basic Pointer

    int a = 5;
    int *ptr = &a;
    cout << *(ptr) << endl;

    int *p = new int(40);

    cout << *(p) << endl;

    return 0;
}
