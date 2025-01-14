#include <iostream>
using namespace std;


class num{
static int count;
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number : "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor is call for object number : "<<count<<endl;
            count--;
        }
};
int num::count = 0;
int main(){
    cout<<"We are inside a main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;

    return 0;
}
