#include<iostream>
using namespace std;
 struct Node{

 int data;
 Node* next;
 };
void combine(Node* node1,Node* node2){

    while(node1->next!= NULL){
        node1 = node1->next;
    }
    node1->next = node2;


 }
 void sorted(Node* &head){

    Node *x,*y;
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


 void print(Node *head){
 while(head!= NULL){

    cout<<head->data<<" ";
    head = head->next;
 }
 cout<<endl;

 }
 int main(){
 Node* node1 = new Node{4,new Node{2,new Node{8, new Node{6, NULL}}}};
print(node1);

 Node* node2 = new Node{7,new Node{3,new Node{5, new Node{1, NULL}}}};
 print(node2);
 cout<<"whole linked list after combining : ";
 combine(node1,node2);
 print(node1);
 cout<<"Sorted Linked List : ";
 sorted(node1);
 print(node1);



 }
