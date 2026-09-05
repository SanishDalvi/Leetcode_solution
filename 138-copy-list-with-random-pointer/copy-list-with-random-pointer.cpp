/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        unordered_map<Node*, Node*> mt;
        Node* oldlist = head->next;
        Node* newlist = new Node(head->val);
        mt[head] = newlist;
        while (oldlist != nullptr) {
            Node* copyl = new Node(oldlist->val);
            mt[oldlist] = copyl;
            newlist->next = copyl;
            newlist = copyl;
            oldlist = oldlist->next;
        }
        oldlist = head;
        newlist = mt[head];
        while (oldlist) {
            if (oldlist->random == nullptr) {
                newlist->random = nullptr;
            } else {
                newlist->random = mt[oldlist->random];
            }
            newlist = newlist->next;
            oldlist = oldlist->next;
        }
        return mt[head];
    }
};