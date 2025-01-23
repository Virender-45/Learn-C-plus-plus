#include <iostream>

using namespace std;

class Student{
protected:
    int roll_no;

public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(){
        cout << "Your roll no is : " << roll_no << endl;
    }
};

class Test : virtual public Student{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(){
        cout<<"Your marks in "<< endl
            <<"Maths is : "<< maths << endl
            <<"Physics is : "<< physics << endl;
    }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your sport score is : "<< score <<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total, avg;
    public:
        void display(){
            total = maths + physics + score;
            avg = (total/3);
            print_number();
            print_marks();
            print_score();
            cout<<"Total score is : "<< total <<endl;
            cout<<"Average is : "<< avg << "%" << endl;
        }
};

int main(){

    Result vir;

    vir.set_number(10);
    vir.set_marks(10, 45);
    vir.set_score(56);
    vir.display();


    return 0;
}
