#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int* b = &a; //b pointer holding the address of a (& --> address of)

    cout<<b;
    //dereference operator (* --> value at)
    cout<<*b;

    return 0;
}