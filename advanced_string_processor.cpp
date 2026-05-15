#include<iostream>

using namespace std;

int main(){
    string s;
    cout<<"\nEnter a sentence or word: ";
    getline(cin, s);
    int vowel = 0;
    int consonant = 0;
    int digit = 0;
    int spc = 0;

    bool isPalindrome = true;

    

    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            isPalindrome = false;
            break;
        }
    }

    if(!isPalindrome){
        cout<<"\nNot a palindrome!";
    }
    else{
        cout<<"\nPalindrome!";
    }

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            vowel++;
        }
        else if(s[i]>='a' &&s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            consonant++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            digit++;
        }
        else if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' ||
        s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')'  ){
            spc++;
        }
    }
    
    cout<<"\nVowels: "<<vowel<<"\nConsonants: "<<consonant<<"\nDigits: "<<digit<<"\nSpecial character: "<<spc<<endl;

    string current_word ="";
    string longest_word = "";

    for(int i=0;i<s.length();i++){

        if(s[i]==' '){
            if(current_word.length()>longest_word.length()){
                longest_word = current_word;
            }
            current_word = "";
        }
        else{
            current_word+=s[i];
        }
    }
    
    cout<<"\nLongest word: "<<longest_word;

    int freq[256] = {0};

    for(int i=0;i<s.length();i++){
        freq[(unsigned char)s[i]]++;
    }

    cout << "\nCharacter Frequency:\n";
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            cout<<(char)i<<" : "<<freq[i]<<" Times"<<endl;
        }
    }

    for(int i=0;i<s.length()/2;i++){
        int temp = s[i];
        s[i] = s[s.length()-i-1];
        s[s.length()-i-1] = temp;
    }

    cout<<"\nReverse of the sentence: ";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }



    return 0;
}