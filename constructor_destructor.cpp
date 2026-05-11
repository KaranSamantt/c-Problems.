/*
Create a class:
class Demo
Requirements:
Constructor
Print:
Constructor called
Destructor
Print:
Destructor called
Create object inside main() and observe output order.
*/

#include<iostream>

using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"\nConstructor called";
    }

    ~Demo(){
         cout<<"\nDestructor called";
    }
};

int main(){
    Demo d;
    
    return 0;
}