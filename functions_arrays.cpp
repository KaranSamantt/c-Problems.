/*
Takes 5 integers in an array.
Create a function:
int findLargest(int arr[], int size)
Function should return the largest element.
Print the largest element.

Restrictions:

Do not use sorting.
Do not use built-in functions.
*/

#include<iostream>

using namespace std;

int findLargest(int arr[], int size){
    
    int large= arr[0];
    
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }

    return large;
    
}

int main(){
    int arr[5];
    
    cout<<"\nEnter 5 elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    int ans = findLargest(arr, 5);
    
    cout<<"\nThe largest element is: "<<ans;



    return 0;
}