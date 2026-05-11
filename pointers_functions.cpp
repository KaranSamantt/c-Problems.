/*
Write a program that:

Creates two integer variables.
Use a function:
void swapNumbers(int *a, int *b)
Swap the numbers using pointers.
Print values before and after swapping.

Do not use built-in swap().
*/

#include<iostream>

using namespace std;


void swapNumbers(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    cout<<"\nEnter two integers: ";
    cin>>a>>b;

    cout<<"\nBefore swapping: \nA = "<<a<<"\nB = "<<b;
    swapNumbers(&a,&b);
    cout<<"\nAfter swapping: \nA = "<<a<<"\nB = "<<b;


    return 0;
}