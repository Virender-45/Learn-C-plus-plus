#include<iostream>

using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
class Derived: private Base{

};


int main(){
    Derived obj;


return 0;
}
/*
                            Public Derivation   Private Derivation  Protected Derivation
    1. Private Members         Not Inherited        Not Inherited      Not Inherited 
    2. Protected Members        Protected           Private             Protected
    3. Public Members           Public              Private             Protected
*/