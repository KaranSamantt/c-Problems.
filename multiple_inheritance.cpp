/*
Create two base classes:
class A
Function:
showA()
and
class B
Function:
showB()
Create derived class:
class C : public A, public B
Function:
showC()
In main():
Create object of C
Call all three functions
Goal:
Understand multiple inheritance.
*/

#include<iostream>

using namespace std;

class A{
    public:
    void showA(){
        cout<<"\nFUNCTION A";
    }
};

class B{
    public:
    void showB(){
         cout<<"\nFUNCTION B";
    }
};

class C : public A, public B{
    public:
    void showC(){
        cout<<"\nFUNCTION C";
    }
};
int main(){
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();

    return 0;
}