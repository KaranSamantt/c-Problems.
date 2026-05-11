/*
Write a program that:
Creates a recursive function:
int factorial(int n)
Function should calculate factorial using recursion only.
Take input from user.
Print the factorial.
Example:
Input:
5
Output:
120
Hint:
5! = 5 × 4 × 3 × 2 × 1
*/


#include<iostream>

using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;


    cout<<"\nFactorial is: "<<factorial(n);


    return 0;
}