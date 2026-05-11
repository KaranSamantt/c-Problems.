/*
Write a program that:
Takes 5 integers in an array.
Create a function:
void sortArray(int arr[], int size)
Sort the array in ascending order using loops only.
Print the sorted array.
Restrictions:
Do not use built-in sorting functions.
Use swapping manually.
Example:
Input:
5 2 8 1 4
Output:
1 2 4 5 8
*/

#include<iostream>

using namespace std;

void sortArray(int arr[], int size){
  
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[5];

    cout<<"\nEnter five elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sortArray(arr, 5);

    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }


    return 0;
}