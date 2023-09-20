
#include<iostream>
using namespace std;
void print(int a[],int  n, int index)  // n = circular Array er matha  ar index holo total number of arra{
{
    cout<<"Circular Array = ";
    for(int i = n; i<n+index; i++)
    {
        cout<<a[i%index]<<" ";
    }
    cout<<endl;
}
void sortArray(int a[],int n)
{
    cout<<"Unsorted Array = ";
    for(int i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array = ";
// bubble sorting circular array
    for(int i =0; i< n; i++)
    {

        for(int j =i+1 ; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i<6; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void inserItem(int n,int x,int pos,int a[]){
for(int i =n-1;i>= pos;i--){
   a[i+1] = a[i];
   }
   a[pos] = x;
   cout<<"New Array after inserting a new value in given index = ";
for(int i =0;i<n+1;i++){ // here length increased by 1 because of right shifting
    cout<<a[i]<<" ";
}
cout<<endl;
}
void deletition(int n , int pos  , int a[])
{
    int index = n;
    for(int i =pos-1;i<index;i++ ){
        a[i]= a[i+1];

    }
    index--;
    cout<<"index after del = "<<index;
     cout<<"New Array after deleting value at  index = ";
     for(int i = 0; i< 6; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;

}


int main()
{

    int arr[] = {5,3,4,9,6,8};
    int ind =sizeof(arr)/sizeof(arr[0]) ; // size of returns bite
    int n= ind;

    cout<<"Array length = "<<n<<endl;
    print(arr,3,n);
    sortArray(arr,n);
    inserItem(n,10,2,arr);
    deletition(n,2,arr);

}
