#include <iostream>
using namespace std;

template <class T>
class myClass{
public:
    void display(){
        cout << "hello" << endl;
    }
    void func();
};
void func(int a){
    cout<<"This is integer normal function : "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"This is a template function : "<<a<<endl;
}

int main(){
    
    // func(4);
    // func("Virender");
    func(1.3);

    return 0;
}
