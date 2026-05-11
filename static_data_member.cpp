/*
Create a class:
class Counter
Requirements:
Static variable:
count
Constructor should increase count whenever object is created.
Create function:
static void showCount()
Create 3 objects and print total object count.
Goal:
Understand static data members + static functions.
*/


#include<iostream>

using namespace std;

class Counter{
    public:
    static int count;

    Counter(){
        count++;
    }

    static void showCount(){
        cout<<"\nTotal object count: "<<count;
    }

};

int Counter:: count;

int main(){
    Counter c1, c2, c3;


    Counter::showCount();
    return 0;
}