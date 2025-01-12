#include <iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 122;
        cout<<"Enter ID of employee : ";
        cin>>id;
    }
    void getId(void){
        cout<<"The id the employee is : "<<id<<endl;
    }
};

int main(){
    // Employee virender,atul,sahil,nikhil;

    // virender.setId();
    // virender.getId();
    Employee wowz[4];

    for(int i = 0; i < 4; i++){
        wowz[i].setId();
        wowz[i].getId();
    }

    return 0;
}