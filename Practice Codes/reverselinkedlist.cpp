#include <stack>
#include<iostream>>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void reverseLinkedList(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    stack<Node*> s;
    Node* curr = head;
    while (curr != nullptr) {
        s.push(curr);
        curr = curr->next;
    }

    curr = s.top();
    s.pop();
    head = curr;

    while (!s.empty()) {
        curr->next = s.top();
        s.pop();
        curr = curr->next;
    }

    curr->next = nullptr;
}
int main() {
    // Create a linked list with nodes 1, 2, 3, 4
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, nullptr}}}};

    // Print the original linked list
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    // Reverse the linked list using a stack
    reverseLinkedList(head);

    // Print the reversed linked list
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;



    return 0;
}
