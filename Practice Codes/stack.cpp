#include <iostream>
#include <stack>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head)
{
    // Create an empty stack
    stack<ListNode*> st;

    // Push all nodes onto the stack
    while (head != NULL)
    {
        st.push(head);
        head = head->next;
    }

    // Pop each node from the stack and set its next pointer
    ListNode* newHead = st.top();
    st.pop();
    ListNode* current = newHead;
    while (!st.empty())
    {
        current->next = st.top();
        st.pop();
        current = current->next;
    }

    // Set the last node's next pointer to NULL
    current->next = NULL;

    return newHead;
}

int main()
{
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print the original list
    cout << "Original list: ";
    ListNode* current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    // Reverse the list
    head = reverseList(head);

    // Print the reversed list
    cout << "Reversed list: ";
    current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
