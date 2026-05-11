/*
Create a class Student with:

Data members:
name
marks
Requirements:
Create a parameterized constructor.
Create a function:
void display()
Take input from user using constructor.
Print student details using display().

Expected idea:

Student s("Karan", 95);
*/

#include<iostream>

using namespace std;

class Student{
    string name;
    int marks;
    public:
    Student(string n, int m){
        name = n;
        marks = m;
    }
    
    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nMarks: "<<marks;
    }
};


int main(){
    Student s("Karan", 95);
    s.display();

    return 0;
}