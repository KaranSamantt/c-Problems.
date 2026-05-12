/*Create a class:
class Complex
Data members:
real, imag
Requirements:
Constructor to initialize values
Overload + operator to add two complex numbers
Create function:
void display()
Example:
c1 = 2 + 3i
c2 = 1 + 4i
Output:
3 + 7i
*/


#include<iostream>

using namespace std;

class Complex{
    double real;
    double imag;
    public:

    Complex(double r, double i){
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& obj){
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display(){
        if(imag<0){
            cout<<real<<" - "<<-imag<<"i"<<endl;
        }
        else{
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
    }
};
int main(){
    Complex c1(2,5);
    Complex c2(4,6);

    Complex c3 = c1+c2;

    cout<<"\nC1:";
    c1.display();

    cout<<"\nC2:";
    c2.display();

    cout<<"\nTOTAL:";
    c3.display();

}