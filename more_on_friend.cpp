#include <iostream>
using namespace std;

class Y; //To tell compiler that a class with name Y exists

class X{
    int data;
    friend void add(X, Y);
    public:
        void setValue(int value){
            data = value;
        }
};
class Y{
    int num;
    friend void add(X, Y);
    public:
        void setValue(int value){
            num = value;
        }
};

void add(X o1, Y o2){
    cout<<"Summing datas of X and Y objects gives me : "<<o1.data + o2.num<<endl; 
}

int main(){
    X a;
    Y b;

    a.setValue(10);
    b.setValue(20);

    add(a, b);

    return 0;
}
