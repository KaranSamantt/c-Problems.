/*
Write a program that:
Takes a 2 x 2 matrix input.
Print:
Sum of all elements
Largest element
Example:
1 2
3 4
Output:
Sum = 10
Largest = 4
*/

#include<iostream>

using namespace std;

int main(){
    int mat[2][2];

    cout<<"\nEnter elements for 2x2 MATRIX: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"\nThe elements are: \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<" "<<mat[i][j];
        }
        cout<<"\n";
    }

    int sum = 0;
    int lar = mat[0][0];

    for(int i=0;i<2;i++){
        for(int j=1;j<2;j++){
            if(mat[i][j]>lar){
                lar = mat[i][j];
            }
        }
    }

    cout<<"\nLargest element is: "<<lar;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum += mat[i][j];
        }
    }

    cout<<"\nThe sum is: "<<sum;
}