#include <iostream>
using namespace std;

template<class T1, class T2>
class myClass{
        T1 data1;
        T2 data2;
    public:

        myClass(T1 a, T2 b): data1(a), data2(b){}

        void display(){
            cout<<this->data1 << " "<< this->data2<<endl;
        }
};

int main()
{
    myClass<int, char> obj(1, 'v');
    obj.display();

    myClass<int, string> obj2(2, "Virender");
    obj2.display();

    return 0;
}
