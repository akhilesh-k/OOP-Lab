/*
Lab 01-A
1.	Create a class called Complex for performing arithmetic with complex numbers.  
Use double variables to represent the private data of the class.  
Provide public member functions for each of the Input, Addition, Subtraction and Display
Author: Akhilesh
*/

#include<iostream>
using namespace std;

class Complex{
    double real;
    double imaginary;

    public:
    void input();
    void add(Complex);
    void subtract(Complex);
    void display();

};

void Complex::input(){
    cout<<"\n Enter the real part";
    cin>>real;
    cout<<"\n Enter the imaginary part";
    cin>>imaginary;
    cout<<"\n";
}

void Complex::add(Complex c1){
    cout<<"Sum is:"<<this->real+c1.real<<" + i"<<this->imaginary<<"\n";
}
void Complex::subtract(Complex c1){
    if(this->imaginary>c1.imaginary)
    cout<<"Subtraction is:"<<c1.real-this->real<<"- i"<<this->imaginary-c1.imaginary<<"\n";
    else
    cout<<"Subtraction is:"<<c1.real-this->real<<"+ i"<<c1.imaginary-this->imaginary<<"\n";
}
void Complex::display(){
    cout<<real<<"+"<<"i"<<imaginary<<"\n\n";
}
int main(){
    Complex c1,c2;
    cout<<"Enter the 1st Complex number";
    c1.input();
    c1.display();
    cout<<"Enter the 2nd COmplex Niumber";
    c2.input();
    c2.display();
    c1.add(c2);
    c1.subtract(c2);
    return 0;
}
