/*
Write a program that:
Creates a file named:
data.txt
Writes:
Hello World
Closes the file.
Use:
ofstream
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream chal;
    chal.open("C:\\Users\\karan\\Documents\\FOCP\\data.txt");
    chal<<"Hello World";
    chal.close();

    return 0;
}