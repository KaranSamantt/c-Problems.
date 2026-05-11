/*
THIS PROGRAM:
Takes an integer n as input.
Prints:
"Positive Even" if number is positive and even
"Positive Odd" if number is positive and odd
"Negative" if number is negative
"Zero" if number is 0
Then print the sum of all numbers from 1 to n.
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n%2==0 && n>0){
        cout<<"\nPositive Even";
    }

    else if(n%2!=0 && n>0){
        cout<<"\nPositive Odd";
    }

    else if(n<0){
        cout<<"\nNegative";
    }

    else{
        cout<<"\nZero";
    }

    int sum=0;

    for(int i=1;i<=n;i++){
        sum +=i;
    }

    cout<<"\nSum of all numbers is: "<<sum;





    return 0;
}