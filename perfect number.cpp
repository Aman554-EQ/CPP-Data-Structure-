#include<iostream>
using namespace std;
bool perfect(int n){
    int sum=0;
bool perfectnum = false;
for(int i=1;i<=n-1;i++){
    if(n%i==0){
        sum+=i;
    }
}
if(sum==n){
    perfectnum= true;
}
return perfectnum;
}
int main(){
int a,b;
cout<<"Enter lowest range = "<<"\n";
cin>>a;
cout<<"Enter highest range = "<<"\n";
cin>>b;
cout<<"Perfect numbers are : ";
for(int i=a;i<=b;i++){
    bool isperfect = perfect(i);
    if(isperfect == true)
    cout<<i<<endl;
}

}
