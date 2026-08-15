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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        for (ListNode* p = head; p != nullptr; p = p->next) {
            ++size;
        }

        int index = size - n;
        if (index == 0) {
            return head->next;
        }


        int i = 0;
        ListNode* p = head;
        for (; i+1 != index; p = p->next, ++i) {}
        p->next = p->next->next;

        
        return head;
    }
};
