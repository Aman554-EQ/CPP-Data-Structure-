#include <bits/stdc++.h>
using namespace std;
void print(char a[], int n, int ind)
{
    // Create an auxiliary array of twice size.
    char b[(2 * n)];

    // Copy a[] to b[] two times
    for (int i = 0; i < n; i++){
        b[i]  = a[i];
        b[n+i] = a[i];
    }
    cout<<"Linear doubled Array : ";
    for(int i =0;i< n*2 ; i++){
        cout<<b[i];
    }
    cout<<endl;

    // print from ind-th here = 4  index to (n+i)th index.
    for (int i = ind; i < n + ind; i++)
        cout << b[i] << " ";
}

// Driver code
int main()
{
    char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"size of a = "<<sizeof(a)<<endl;
    cout<<"size of index = "<<sizeof(a[0])<<endl;
    print(a, n, 3);
    return 0;
}

