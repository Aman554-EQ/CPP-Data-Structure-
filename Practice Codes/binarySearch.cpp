#include<iostream>
#include<math.h>
using namespace std;
int binarySearch(int a[], int n , int data){
int l,r,mid;
l =0;
r = n;

while(l<= r){
    mid = floor((l+r)/2);
    if(a[mid]== data){
        return mid;
    }
    else if ( a[mid]<data){
       l = mid+1;
    }
    else{
        r = mid-1;
    }

}
return -1;
}

int main(){
int num;
int arr[] = {5,7,9,12,15,20,24,27,33,40,50,65,72};
 int n = sizeof(arr)/sizeof(arr[0]);
 for(int i = 0 ; i<n; i++){
    cout<<arr[i]<<" ";
 }
 int l = n-1;

 cout<<endl;
 cout<<"Enter the number u want to search  : ";
 cin>>num;
 cout<<endl;
 int data = binarySearch(arr,l,num);
 cout<<"Index number = "<<data<<endl;
 if(data == -1){
    cout<<num<<" not found";
 }
 else {
    cout<<arr[data]<<" found in Array by binary Search ";
 }

}
