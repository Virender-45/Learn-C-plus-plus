#include <iostream>

using namespace std;

void change(int* ptr){ //Pass by referrence using pointers
    *ptr = 20;
}
void change2(int &b){ //Pass by referrence using alias
    b = 30;
}

int main(){
    int a = 10;
    int* b = &a; //b pointer holding the address of a (& --> address of)

    cout<<b;
    //dereference operator (* --> value at)
    cout<<*b;

    // int a = 10;
    // int *ptr = &a;

    // change2(a);

    // cout<<a;

    // cout<<a<<endl;
    // cout<<ptr<<endl;


    //array Pointer
    int arr[] = {1, 2, 3, 4, 5};

    // cout<< arr <<endl;
    // cout<< *arr <<endl;

    //Pointer arithmetic
    int a = 10;
    int* ptr = &a;
    cout<< ptr <<endl;
    ptr++;    
    cout<< ptr <<endl;


    

    return 0;
}
