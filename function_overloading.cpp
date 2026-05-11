/*
Create a class:
class Print
Create two overloaded functions:
void show(int x)
and
void show(string str)
Both should print their values.
Call both functions from main().
*/

#include<iostream>

using namespace std;

class Print{

    public:
    void show(int x){
        cout<<x;
    }

    void show(string str){
        cout<<"\n"<<str;
    }
};

int main(){
    Print p;
    p.show(5);
    p.show("karan");

    return 0;
}