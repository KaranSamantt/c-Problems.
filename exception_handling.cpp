/*
Write a program that:
Takes two integers:
a, b
If b == 0
throw exception:
"Division by zero"
Otherwise print:
a / b
Use:
try
catch
throw
*/

#include<iostream>
#include<stdexcept>

using namespace std;

int main(){
    int a, b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;

    try{
        // Check for the error condition first
        if(b==0){
            // Throw an exception with the specific message:-
            throw runtime_error("Division by zero");
        }
            cout<<"\nResult: "<<(a/b);
    }
    catch(const exception& e){
        cout<<"\nException caught: "<<e.what();
    }

    return 0;
}