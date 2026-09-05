/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* childlist(Node* head) {
        Node* curr = head;
        Node* last = nullptr;
        while (curr) {
            Node* next = curr->next;
            if (curr->child) {
                Node* child = curr->child;
                curr->next = curr->child;
                child->prev = curr;
                Node* childlast = childlist(child);
                childlast->next = next;
                if (next)
                    next->prev = childlast;
                curr->child = nullptr;
                last = childlast;
            } else {
                last = curr;
            }
            curr = curr->next;
        }
        return last;
    }

    Node* flatten(Node* head) {
        if(head) childlist(head);
        return head;
    }
};