/*define a class complex and overload following operator
1. +
2. -
3. * */
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imaginary;
    public:
    void showdata(){
    cout<<real<<"+"<<imaginary<<"i";
}
    void setdata(int x , int y){
        real = x;
        imaginary = y;
    }
    friend Complex operator+(Complex A, Complex B);
    friend Complex operator-(Complex A, Complex B);
    //friend Complex operator*(Complex A, Complex B);
};
Complex operator+(Complex A, Complex B){
    Complex result;
    result.real = A.real + B.real;
    result.imaginary = A.imaginary + B.imaginary;
    return result;
}
Complex operator-(Complex A, Complex B){
    Complex result;
    result.real = A.real - B.real;
    result.imaginary = A.imaginary - B.imaginary;
    return result;
}

int main(){
    Complex a , b, c, d;
    a.setdata(2,3);
    b.setdata(4,5);
    c = operator+(a,b);
    d = operator-(a,b);
    cout<<"addition:\n";
    c.showdata();
    cout<<"\nsubtracion:\n";
    d.showdata();
    return 0;
}
