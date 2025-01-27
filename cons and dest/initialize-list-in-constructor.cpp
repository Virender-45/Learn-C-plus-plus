#include <iostream>

using namespace std;

class Test{
    int a, b;
    public:
        Test(int i, int j): a(i), b(j){
            cout<<"Constructor is called "<<endl;
            cout<<"Value of a is : " << a <<endl;
            cout<<"Value of b is : " << b <<endl;
        }
};

int main(){
    Test obj(4, 7);    

    return 0;
}
