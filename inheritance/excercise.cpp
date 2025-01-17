#include<iostream>

using namespace std;

class simpleCalculator{
    protected:
        int a, b;
    public:
        void setNumbers(int, int);
        
};
void simpleCalculator::setNumbers(int num1, int num2){
        a = num1;
        b = num2;
}

class scientificCalculator{};

int main(){
    

return 0;
}
/*
1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, /
and displays the results using another function.
2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and
displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of Inheritance are you using?Q
Q2. Which mode of Inheritance are you using?
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4. How is code reusability implemented?
*/