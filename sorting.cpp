#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void bubblesort(vector<int> &arr, int n){

    for(int i=0;i<n-1;i++){

        bool isswap = false;

        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isswap = true;
            }
            
            
            if(!isswap){
                return;
            }
        }
    }
    } 


void selectionSort(vector<int> &arr, int n){

    for(int i=0;i<n-1;i++){
        int smallestIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }

        swap(arr[i], arr[smallestIndex]);
    }
}

void insertionSort(vector<int> &arr, int n){

    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
    
void printarray(vector<int> &arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int n = 5;
    vector<int> arr = {1,2,8,4,9};

    insertionSort(arr, n);
    printarray(arr, n);

    return 0;
}