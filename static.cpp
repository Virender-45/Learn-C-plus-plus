#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; //static data member of class Employee

public:
    void setData(void){
        cout<<"Enter the ID : ";
        cin >> id;
        count++;
    }
    void getData(void){
        cout<<"The id of Employee is : "<<id <<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){
        // cout<<id;   //Error, Static member functions can only access static member and functions
        cout<<"The value of count is : "<<count<<endl;
    }
};

int Employee::count;
int main(){
    Employee virender,atul,sahil;
    virender.setData();
    virender.getData();
    Employee::getCount();

    atul.setData();
    atul.getData();
    Employee::getCount();

    sahil.setData();
    sahil.getData();
    Employee::getCount();

    return 0;
}