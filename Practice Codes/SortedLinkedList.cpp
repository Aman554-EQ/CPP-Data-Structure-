#include<iostream>>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void  BubbleSorting(Node* &head)
{
    Node *x,*y;
    int temp;

    for(x=head; x->next!=NULL; x=x->next)
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

int main(){
Node* node1 = new Node{80, new Node {50,new Node {70,new Node {40, new Node{10,NULL}}}}};
Node* node2 = node1;
cout<<"Unsorted Linked List : ";
while(node1!= NULL){
    cout<<node1->data<<" ";
    node1 = node1 ->next;
}
cout<<endl;
cout<<"Sorted Linked list : ";
BubbleSorting(node2);
while(node2!= NULL){
    cout<<node2->data<<" ";
    node2 = node2 ->next;
}
cout<<endl;

}
