#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 5;
    int y = 2;

    swap(x, y);

    cout<<x<<endl<<y;

    return 0;
}
