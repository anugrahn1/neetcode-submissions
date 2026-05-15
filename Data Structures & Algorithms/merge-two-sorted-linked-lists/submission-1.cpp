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
        if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }

        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* new_head = nullptr;
        ListNode* result = nullptr;

        while (head1 != nullptr && head2 != nullptr) {
            ListNode* node;
            if (head1->val <= head2->val) {
                 node = new ListNode{head1->val, nullptr};
                head1 = head1->next;
            }
            else {

                 node = new ListNode{head2->val, nullptr};
                head2 = head2->next;
            }

            if (result == nullptr) {
                result = node;
                new_head = node;
            }
            else {
                new_head->next = node;
                new_head = new_head->next;
            }
        }

        if (head1 != nullptr) {
            new_head->next = head1;
        }

        if (head2 != nullptr) {
            new_head->next = head2;
        }
        return result;
        
    }
};
