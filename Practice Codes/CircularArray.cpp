// CPP program to demonstrate the use of circular
// array without using extra memory space
#include <bits/stdc++.h>
using namespace std;

// function to print circular list starting
// from given index ind.
void print(char a[], int n, int ind)
{
    // print from ind-th index to (n+i)th index.
     // i is iterating here from 3 to 8 which will print the circular Array
    for (int i = ind; i < n + ind; i++)
        cout << a[i % n] << " ";
}

// Driver code
int main()
{
    char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n, 3);
    return 0;
}
