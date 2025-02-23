#include <iostream>
#include <string>

using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    // Person(string n, int a){
    //     name = n;
    //     age = a;
    // }

    virtual void display() = 0; // Do nothing function --> pure virtual function



    // virtual void display() 
    // {
    //     cout << "Person details: " << endl;
    //     cout << "Name: " << name << ", Age: " << age << endl;
    // }

    // Virtual destructor to ensure proper cleanup
    virtual ~Person() {}
};

class Employee : public Person{
protected:
    int empid;
    float salary;

public:
    Employee(string n, int a, int id, float s) : Person(n, a){
        empid = id;
        salary = s;
    }
    void display(){
        cout << "Details of employee" << endl;
        cout << "Id : " << empid << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Student : public Person{
protected:
    int roll_no;
    float math_marks, physics_marks;

public:
    Student(string n, int a, int rn, float mm, float pm) : Person(n, a){
        roll_no = rn;
        math_marks = mm;
        physics_marks = pm;
    }
    void display(){
        cout << "Details of Student" << endl;
        cout << "Roll No. : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Marks in maths : " << math_marks << endl;
        cout << "Marks in physics : " << physics_marks << endl;

        float total = math_marks + physics_marks;
        if (total >= 66){
            cout << "Pass**" << endl;
        }
        else{
            cout << "Fail!!" << endl;
        }
    }
};

int main(){
    string name = "Virender";
    int age = 21;
    int id = 1001;
    int roll_no = 2325;
    float salary = 200000;
    float mm = 92;
    float pm = 91;

    // By employee class
    Employee emp_obj(name, age, id, salary);
    // emp_obj.display();

    // By student class
    Student student_obj(name, age, roll_no, mm, pm);
    // student_obj.display();

    //Creating objects array
    Person *person_ptr[2];
    person_ptr[0] = &emp_obj;
    person_ptr[1] = &student_obj;

    person_ptr[0]->display();
    person_ptr[1]->display();

    return 0;
}
