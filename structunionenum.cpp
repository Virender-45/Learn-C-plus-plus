#include <iostream>

using namespace std;

typedef struct employee
{
    float salary;
    int age;
    char gender;
} ep; // struct employee is noe 'ep'

union money
{
    int dol;
    int rup;     // Can only use one of these
    int pou;
};

int main(){
    //struct
    ep virender;
    virender.age = 20;
    virender.gender = 'm';
    virender.salary = 5000;

    cout<<"The salary of Virender is : "<<virender.salary<<endl;
    cout<<"The age of Virender is : "<<virender.age<<endl;
    cout<<"The gender of Virender is : "<<virender.gender<<endl;

    //Union 
    union money m1;
    m1.rup = 10;
    cout<<m1.rup<<endl;

    //Enum
    enum Meal{breakfast, lunch, dinner};
    Meal e1 = breakfast;
    cout<<e1;

    return 0;
}