// to find the addition of complex number by using friend function
#include<iostream>
using namespace std;

class Complex
{
    float real, imag;
public:
    Complex(): real(0.0), imag(.0) {}

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    void getData()
    {
        cout << "Enter: ";
        cin >> real >> imag;
    }

    void showdata()
    {
        (imag>0) ? printf("%.2f+%.2fi", real, imag) : printf("%.2f-%.2fi", real, -imag);
    }

    friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex c1, Complex c2)
{
    return Complex(c1.real + c2.real, c1.imag+c2.imag);
}

int main()
{
    Complex c1, c2, c3;

    c1.getData();
    c2.getData();
    c3 = c1+c2;
    c3.showdata();


    return 0;
}