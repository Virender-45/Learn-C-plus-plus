/* 3. User-Defined Data Types (Struct)
Define a struct called Student with the following members:
* Name (string)
* Roll number (int)
* Marks in three subjects (array of floats)
* A function to calculate the average marks.
Write a program that creates an array of Student and prints the average marks for each student. */

#include <iostream>

using namespace std;

typedef struct Student{
    string name;
    int rollNo;
    float marks[3];
} s;

float calcAverage(Student s){
    float sum = 0;
    for(int i = 0; i < 3; i++){
        sum += s.marks[i];
    }
    return sum / 3;
}


int main(){
    s virender = {"Virender", 10, {10, 11, 12}};
    s atul = {"Atul", 11, {20, 32, 53}};
    s sahil = {"Sahil", 12, {21, 45, 43}};
    s nikhil = {"Nikhil", 13, {43, 13, 23}};

    // Calculate and display details of each student
    s students[] = {virender, atul, sahil, nikhil};
    
    for(int i = 0; i < 4; i++){
        cout<<"Name of student is "<<students[i].name<<endl;
        cout<<"Roll No: "<<students[i].rollNo<<endl;
        cout<<"Average marks : "<<calcAverage(students[i])<<endl;
        cout<<"---------------------------------"<<endl;
    }

    return 0;
}
