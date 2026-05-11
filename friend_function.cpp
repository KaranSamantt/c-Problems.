/*
Create a class:
class Number
Private variable:
num
Requirements:
Constructor to initialize value
Friend function:
void display(Number n)
Friend function should print private variable.
Goal:
Understand friend functions accessing private data.
*/

#include<iostream>

using namespace std;

class Number{
    int num;
    public:

    Number(int n){
        num = n;
    }

    friend void display(Number n);
};

void display(Number n){
    cout<<n.num;
    }

int main(){
    Number n1(5);
    display(n1);
    return 0;
}