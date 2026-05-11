/*
Write a function:

bool isPalindrome(string str)

Program should:

Take a string input
Check whether it is palindrome or not
Return true or false
Print:
Palindrome
or
Not Palindrome
*/

#include<iostream>

using namespace std;

bool isPalindrome(string str){
   
    for(int i=0;i<str.length()/2;i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;

}

int main(){

    string str;

    cout<<"Enter string: ";
    cin>>str;

    if(isPalindrome(str)){
        cout<<"\nPalindrome";
    }
    else{
        cout<<"\nNot Palindrome";
    }
  
    return 0;
}