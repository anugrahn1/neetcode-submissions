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
    void reorderList(ListNode* head) {
        int length = 0;
        for (ListNode* p = head; p->next != nullptr; p = p->next) {
            ++length;
        }
        int mid_index = length/2;
        int i = 0;

        ListNode* second;
        for (ListNode* p = head; p != nullptr; p = p->next, ++i) {
            if (i >= mid_index) {
                second = p->next;
                p->next = nullptr;
                break;
            }
        }

        ListNode* prev = nullptr;
        ListNode* curr = second;
        ListNode* next;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        //TODO: Merge the two lists
        int j = 0;
        for (ListNode* p = head; p != nullptr; p = p->next) {
            if (j % 2 == 0 && prev != nullptr) {
                ListNode* temp = p->next;
                p->next = prev;
                prev = prev->next;
                p->next->next = temp;
            }
            ++j;
        }
    }
};