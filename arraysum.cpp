#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter array length :";
cin>>n;
int arr[n];
cout<<"Enter the num u want to sum : ";
for(int i=1;i<=n;i++){
    cin>>arr[i];

}
for(int i=1;i<=n-1;i++){//sum of n-1
        sum+=arr[i];
    }

cout<<"The sum is "<<sum;


return 0;
}
