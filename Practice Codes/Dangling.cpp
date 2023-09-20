#include<iostream>
using namespace std;
int main(){
    // dangling pointer
int *pt1 = new int;
int *pt2 ;
*pt1 = 1;
*pt2 = 4;
pt2 = pt1;
delete pt1;
//cout<<*pt1<<endl;
//cout<<*pt2<<endl;


int *ptr = new int;
int *ptr1 = new int;
*ptr =8;
*ptr1 =9;
ptr1 = ptr;// memory leak
//cout<<*ptr<<endl ;
//cout<< *ptr1;




}
