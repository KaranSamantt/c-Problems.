/*
Write a program with:
Base class
class Base
Function:
virtual void show()
Print:
Base class
Derived class
class Derived : public Base
Override show() and print:
Derived class
In main()
Create base class pointer
Store derived object address
Call show()
Goal:
Understand runtime polymorphism.
*/


#include<iostream>

using namespace std;

class Base{
    public:
virtual void show(){
    cout<<"\nBase class";
}
};

class Derived : public Base{
    void show(){
        cout<<"\nDerived class";
    }
};

int main(){
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();


    return 0;
}