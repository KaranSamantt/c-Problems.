/*
Write a program that:
Dynamically creates an integer array using:
new
Take 5 elements input.
Print all elements.
Free memory using:
delete[]
Goal:
Understand heap memory allocation.
*/


#include<iostream>

using namespace std;

int main(){
    int size = 5;

    // Dynamically allocate memory for an array of 5 integers on the heap
    int *arr = new int[size];

    cout<<"Enter "<<size<<" Integers"<<endl;
    for(int i=0;i<size;i++){
        cout<<"\nElement "<<(i+1)<<" : ";
        cin>>arr[i];
    }

    cout<<"\nThe elements in the array are: ";

    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

    // Free the dynamically allocated memory
    delete []arr;

    // Good practice: Set the pointer to null so it doesn't point to freed memory (dangling pointer)
    arr=nullptr;

    return 0;
}