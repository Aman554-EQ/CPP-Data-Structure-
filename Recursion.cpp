#include <iostream>
#include <math.h>
using namespace std;
// Fibonacci Number :
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }

}
// Factorial
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
//SUM of Digits
int sumOfDigits(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return (x % 10 + sumOfDigits(x / 10));
    }

}
// Find minimum number from Array
int findMin(int a[], int size)
{
    int minimum;
    if (size == 1)
    {
        minimum=a[0];
        return minimum;
    }
    else
    {
        return minimum=a[size]<findMin(a,size-1)?a[size]:findMin(a,size-1);
    }
}
//  Decimal To Binary
int DecToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }

    else
    {
        return dec % 2 + 10 * DecToBin(dec / 2);
    }

}
// Compute Series Sum
double seriesSum(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return 1.0 / pow(2, n) + seriesSum(n - 1);
    }

}

int main() {

    cout << "Fibonacci number : " << fib(10) << endl;
    cout << "Factorial: " << factorial(6) << endl;
    cout << "Sum of the digits: " << sumOfDigits(213) << endl;

    int a[10] = {40, 50, 3, 2, 1, 9, 10, 13, 23, 32};
    cout << "Minimum number: " << findMin(a, 10) << endl;
    cout << "Binary is: " << DecToBin(15) << endl;
    cout << "Sum of the series: " << seriesSum(3) << endl;

    return 0;
}
