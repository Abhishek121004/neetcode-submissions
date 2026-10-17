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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;

        while(temp1 != nullptr && temp2 != nullptr) {
            if(temp1->val <= temp2->val) {
                cur->next = temp1;
                cur = cur->next;
                temp1 = temp1->next;
            }
            else {
                cur->next = temp2;
                cur = cur->next;
                temp2 = temp2->next;
            }
        }

        if(temp1) {
            cur->next = temp1;
            temp1 = temp1->next;
        }
        if(temp2) {
            cur->next = temp2;
            temp2 = temp2->next;
        }
        return dummy->next;
    }
};
