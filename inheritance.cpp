/*
Create:
Base class
class Animal

Function:
void sound()

Print:
Animal makes sound
Derived class
class Dog : public Animal

Function:
void bark()

Print:
Dog barks
In main()
Create object of Dog
Call both functions

Goal:
Understand inheritance + derived object access.
*/

#include<iostream>

using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"\nAnimal makes sound";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"\nDog barks";
    }

};

int main(){
    Dog d;
    d.bark();
    d.sound();
    

    return 0;
}