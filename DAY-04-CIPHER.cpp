/*
//QUESTION -01
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    double result=static_cast<double>(a)/b;
    cout<<"Division: "<<result<<endl;
    cout<<"Modulus: "<<a%b<<endl;
    return 0;
}*/
//QUESTION -02
#include <iostream>

class Complex {
private:
    double real;    // Real part
    double imag;    // Imaginary part

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Getter functions
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Setter functions
    void setReal(double r) { real = r; }
    void setImag(double i) { imag = i; }

    // Operator overloading for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Operator overloading for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overload the >> operator for input
    friend std::istream& operator>>(std::istream& is, Complex& c) {
        std::cout << "Enter real part: ";
        is >> c.real;
        std::cout << "Enter imaginary part: ";
        is >> c.imag;
        return is;
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        if (c.imag >= 0)
            os << c.real << " + " << c.imag << "i";
        else
            os << c.real << " - " << -c.imag << "i";
        return os;
    }
};

int main() {
    Complex c1, c2;

    // Take input for complex numbers
    std::cout << "Enter first complex number:\n";
    std::cin >> c1;
    std::cout << "Enter second complex number:\n";
    std::cin >> c2;

    // Perform addition and subtraction
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    // Output results
    std::cout << "First complex number: " << c1 << std::endl;
    std::cout << "Second complex number: " << c2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}



