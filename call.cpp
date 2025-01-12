#include <iostream>

using namespace std;

void swap(int a, int b){ //This function not works
    int temp = a;
    a = b;
    b = temp;
}
//Cal by reference using pointers
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Cal by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    // swap(x, y); This function not working
    // swapPointer(&x, &y); This will swap
    swapReferenceVar(x, y);

    cout<<"The value of x is : "<<x<<" and the value of y is : "<<y;

    return 0;
}