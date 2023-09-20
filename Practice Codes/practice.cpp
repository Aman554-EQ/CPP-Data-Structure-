#include <bits/stdc++.h>
using namespace std;

// Function to insert element
// at a specific position
void insertElement(int arr[], int n, int x, int pos)
{
    // shift elements to the right
    // which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = x;
}
void deletition(int n , int pos  , int a[])
{
    int index = n;
    for(int i =pos-1;i>index;i++ ){
        a[i]= a[i+1];

    }
    index--;
     cout<<"New Array after deleting value at  index = ";
     for(int i = 0; i< index; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;

}


int main() {
   int arr[] = { 1, 2, 3, 4, 5 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int pos = 2; // position of element to be deleted

   // shift elements to the left
   for (int i = pos; i < n - 1; i++) {
      arr[i] = arr[i + 1];
   }

   // decrease array size by 1
   n--;

   // print the updated array
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }

   return 0;
}
