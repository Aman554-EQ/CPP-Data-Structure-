#include<iostream>
using namespace std;
int main(){


int *ptr , num=20;
ptr = &num; // pointer storing the address of num variable
*ptr = 16; //  pointer is changing the value of num

cout<<"ptr = "<<ptr<<endl ;
cout<<"num = " <<num<<endl;
cout<< "& num = "<<&num<<endl;
}
