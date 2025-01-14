#include <iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        //When no copy constructor is found, compiler supplier its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for the object is : "<< a <<endl;
        }
};

int main(){
    Number n1, n2, n3, b;

    Number a = Number(n1);
    a.display();

    b = n1;
    Number c = n1;

    return 0;
}
