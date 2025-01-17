#include<iostream>
using namespace std;

//Base Class
class Employee{
    //Private member never inherits
    public:
    int id; 
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
};

//Derived Class //Default visibility mode is private
class Programmer :public Employee{
    public:
        int languageCode;
        Programmer(int inpId){
            id = inpId;
            languageCode = 9;
        }
        void display(){
            cout<<id<<endl;
        }
};


int main(){
    Employee virender(1), rohan(2);
    cout << virender.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillf(2);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;

    return 0;
}

//DRY - Don't Repeat Yourself
/*
  Single Inheritance
  Multiple Inheritance    One base multiple derrived classes
  hierarchical Inheritance    Several derived class from more than one base class
  Multilevel Interitance    Deriving a class from already derived class
  Hybrid Inheritance    It it a combination of multiple and multilevel inheritance

*/
