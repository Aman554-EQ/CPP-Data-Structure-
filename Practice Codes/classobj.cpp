#include<iostream>
using namespace std;

class classobj{
public :
    int id;
    string name;
    float salary;

    void employee(int i, string j, float k){
    id = i;
    name = j;
    salary =k;

    }
    void showdata(){
    cout<<"Name : "<<name<<" , Id : "<<id<<" , Salary : "<<salary<<endl;

    }


};
int main(){

classobj c1,c2;
c1.employee(21,"Aman",75.6);
c1.showdata();
c2.employee(22,"Amankk",7544.6);
c2.showdata();

}
