#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    double a,b,c,d;
    cout<<"Enter 1st real  number : ";
    cin>>a;
    cout<<"Enter 2nd img  number : ";
    cin>>b;
    cout<<"Enter 3rd real  number : ";
    cin>>c;
    cout<<"Enter 4th img  number : ";
    cin>>d;
    Complex c1(a, b), c2(c, d);

    Complex c3 = c1 + c2;
    cout<<"Sum = "; // sum = (a+c)+(b+d)i
    c3.Print();
    Complex c4 = c1 - c2;
    cout<<"Sub = "; // sub = (a-c)+(b-d)i
    c4.Print();
    Complex c5 = c1 * c2;
    cout<<"Multiply = "; // mul = ac-bd + (bc+ad)i
    c5.Print();

    bool flag =(c1 != c2);
    if(flag == true)
    {
        cout<<"The  numbers are equal ";
    }
    else
    {
        cout<<"The numbers are not equal";
    }

    return 0;
}
