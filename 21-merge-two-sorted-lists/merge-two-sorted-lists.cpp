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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        while (list1 != nullptr || list2 != nullptr) {
            int x = (list1 ? list1->val : INT_MAX);
            int y = (list2 ? list2->val : INT_MAX);
            if (x <= y) {
                curr->next = new ListNode(x);
                list1 = list1->next;
            } else {
                curr->next = new ListNode(y);
                list2 = list2->next;
            }
            curr = curr->next;
        }
        return head->next;
    }
};