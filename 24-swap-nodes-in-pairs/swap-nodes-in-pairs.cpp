/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* next = head->next;
        while (next != nullptr && curr != nullptr) {
            prev->next = next;
            curr->next = next->next;
            next->next = curr;
            if (curr->next != nullptr)
                curr = curr->next;
            else
                break;
            if (curr != nullptr)
                next = curr->next;
            else
                break;
            prev = prev->next->next;
        }
        return dummy->next;
    }
};