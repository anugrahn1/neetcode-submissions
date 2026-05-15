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
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head {nullptr};

        for (ListNode* p = head; p != nullptr; p = p->next) {
            new_head = new ListNode{p->val, new_head};
        }
        return new_head;
    }
};
