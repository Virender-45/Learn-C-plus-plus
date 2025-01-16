#include<iostream>

using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void Student::set_roll_number(int a){
    roll_number = a;
}
void Student::get_roll_number(){
    cout<<"The roll number is : "<<roll_number<<endl;
}

class Exam: public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float, float);
        void get_marks();
};
void Exam::set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}
void Exam::get_marks(){
    cout<<"The marks in maths is : "<<maths<<endl;
    cout<<"The marks in physics is : "<<physics<<endl;
}

class Result: public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"The perecentage of student is : "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main(){
    Result virender;
    virender.set_roll_number(10);
    virender.set_marks(95, 86);

    virender.display_result();

return 0;
}

/*
                            Public Derivation   Private Derivation  Protected Derivation
    1. Private Members         Not Inherited        Not Inherited      Not Inherited 
    2. Protected Members        Protected           Private             Protected
    3. Public Members           Public              Private             Protected
*/