#include<iostream>
using namespace std;
struct node{

int data;
node* next;

};
void sorted(node* &head){

    node *x,*y;
    int temp;

    for(x=head; x!=NULL; x=x->next)
    {
        for(y=x->next; y!=NULL; y=y->next)
        {
            if(x->data>y->data)
            {
                temp = x->data;
                x->data = y->data;
                y->data = temp;
            }
        }
    }
}
void print(node *head){
 while(head!= NULL){

    cout<<head->data<<" ";
    head = head->next;
 }
 cout<<endl;

 }
int main(){

node* node1 = new node{4,new node{2,new node{8, new node{6, NULL}}}};
//node* node2 = node1;
//node2->next ;
//node2->data = 2;

cout<<"Linked list = ";
print(node1);
cout<<endl;
sorted(node1);
cout<<"After sorting = ";
print(node1);
}
