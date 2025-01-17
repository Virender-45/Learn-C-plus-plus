#include <iostream>

using namespace std;

class simpleCalculator{
protected:
    int a, b;

public:
    void setNumbers(int, int);
    void displaySimpleMenu();
    int add(int, int);
    int sub(int, int);
    int div(int, int);
    int mult(int, int);
};
void simpleCalculator::setNumbers(int num1, int num2){
    a = num1;
    b = num2;
}
void simpleCalculator::displaySimpleMenu(){
    cout << "Welcome to Simple calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cout << "Enter your choice : ";
}
int simpleCalculator::add(int num1, int num2){
    return num1 + num2;
}
int simpleCalculator::sub(int num1, int num2){
    return num1 - num2;
}
int simpleCalculator::div(int num1, int num2){
    if (num2 != 0){
        return num1 / num2;
    }
    else{
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
int simpleCalculator::mult(int num1, int num2){
    return num1 * num2;
}
class scientificCalculator{
protected:
    float a, b;
public:
    void displayScientificMenu();
    void Power(float, float);
    void Sine(float);
    void Square(float);
    void Cos(float);
    void Tan(float);
    void Log(float);
    void Baselog(float);
};
void scientificCalculator::displayScientificMenu(){
    cout<<"Welcome to scientificCalculator"<<endl;
    cout<<"1. Power"<<endl;
    cout<<"2. Sine"<<endl;
    cout<<"3. Square"<<endl;
    cout<<"4. Cosine"<<endl;
    cout<<"5. Tangent"<<endl;
    cout<<"6. Natural Logarithm"<<endl;
    cout<<"7. Base 10 Logarithm"<<endl;
    cout<<"Enter your choice : ";
}
void scientificCalculator::Power(float x,float y){
float p;
p = pow(x,y);
cout<<"Power: "<<p;
}
void scientificCalculator::Sine(float x){
float s;
s = sin(x);
cout<<"Sin: "<<s;
}
void scientificCalculator::Square(float x){
float sq;
sq = sqrt(x);
cout<<"Square of a Given Value is: "<<sq;
}
void scientificCalculator::Cos(float x){
float c;
c = cos(x);
cout<<"COS: "<<c;
}
void scientificCalculator::Tan(float x){
float t;
t = tan(x);
cout<<"TAN: "<<t;
}
void scientificCalculator::Log(float x){
float l;
l = log(x);
cout<<"Natural Logarithm: "<<l;
}
void scientificCalculator::Baselog(float x){
float bl;
bl = log10(x);
cout<<"LOG with Base 10: "<<bl;
}

class hybridCalculator: public simpleCalculator, public scientificCalculator{
    protected:
        int choice;
        float num1, num2;
    public:
        void displayHybridMenu();

};
void hybridCalculator::displayHybridMenu(){
    cout<<"Welcome to Hybrid Calculator"<<endl;
    cout<<"1. Simple Calculator"<<endl;
    cout<<"2. Scientific Calculator"<<endl;
    cout<<"Enter your choice : ";
}

int main(){
    hybridCalculator calc;
    calc.displayHybridMenu();
    int choice;
    cin>>choice;
    if(choice==1){
        calc.displaySimpleMenu();
        int choice;
        cin>>choice;
        float num1, num2;
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
        calc.setNumbers(num1, num2);
        switch(choice){
            case 1:
                cout<<"Addition of given numbers is : "<<calc.add(num1, num2)<<endl;
                break;
            case 2:
                cout<<"Subtraction of given numbers is : "<<calc.sub(num1, num2)<<endl;
                break;
            case 3:
                cout<<"Division of given numbers is : "<<calc.div(num1, num2)<<endl;
                break;
            case 4:
                cout<<"Multiplication of given numbers is : "<<calc.mult(num1, num2)<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    else if(choice==2){
        calc.displayScientificMenu();
        int choice;
        cin>>choice;
        float num1;
        cout<<"Enter a number: ";
        cin>>num1;
        switch(choice){
            case 1:
                calc.Power(num1, 2);
                break;
            case 2:
                calc.Sine(num1);
                break;
            case 3:
                calc.Square(num1);
                break;
            case 4:
                calc.Cos(num1);
                break;
            case 5:
                calc.Tan(num1);
                break;
            case 6:
                calc.Log(num1);
                break;
            case 7:
                calc.Baselog(num1);
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    else{
        cout<<"Invalid choice. Please try again."<<endl;
    }

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
