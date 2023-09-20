#include<iostream>
using namespace std;

int swapnum(int &x, int &y){
int temp;// x = 1,y = 2
temp = x ; // temp = 1
x = y; // x=2
y = temp; // y =1

return x,y;

}
int main(){

int a,b;
cout<<"Enter 2 numbers :";
cin>>a;
cin>>b;
cout<<"Before swapping 2 numbers a = "<<a<<" b = "<<b<<endl;
swapnum(a,b);
cout<<"After  swapping 2 numbers a = "<<a<<" b = "<<b<<endl;

}
