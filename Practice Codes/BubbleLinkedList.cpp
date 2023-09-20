#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* mergeLists(Node* head1, Node* head2) {
   Node* mergedHead = new Node;
   Node* tail = mergedHead;


    while (head1 != nullptr) {
        tail->next = new Node{ head1->data, nullptr };
        head1 = head1->next;
        tail = tail->next;
    }

    while (head2 != nullptr) {
        tail->next = new Node{ head2->data, nullptr };
        head2 = head2->next;
        tail = tail->next;
    }

    return mergedHead->next;
}

int main() {
    // Create two linked lists
    Node* head1 = new Node{ 1, new Node{ 3, new Node{ 5, nullptr } } };
    Node* head2 = new Node{ 2, new Node{ 4, new Node{ 6, nullptr } } };

    // Merge the two linked lists
    Node* mergedHead = mergeLists(head1, head2);

    // Print the merged list
    while (mergedHead != nullptr) {
        cout << mergedHead->data << " ";
        mergedHead = mergedHead->next;
    }

    return 0;
}
