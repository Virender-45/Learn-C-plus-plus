#include<iostream>

using namespace std;

class Base{
    private:
        int b;
    protected:
        int a;
    public:
        void setData(int aData, int bData){
            a = aData;
            b = bData;
        }
        void display(){
            cout<<"a value is : "<<a<<endl;
            cout<<"b value is : "<<b<<endl;
        }
};
class Derived: public Base{

};


int main(){
    Derived obj;
    obj.setData(1, 2);
    obj.display();

return 0;
}
/*
                            Public Derivation   Private Derivation  Protected Derivation
    1. Private Members         Not Inherited        Not Inherited      Not Inherited 
    2. Protected Members        Protected           Private             Protected
    3. Public Members           Public              Private             Protected
*/