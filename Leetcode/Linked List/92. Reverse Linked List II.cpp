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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* ptr = head;
        if (!head->next || left == right)
            return head;
        for (int i = 0; i < left - 2; i++)
            ptr = ptr->next;
        ListNode* pre = NULL;
        ListNode* current;
        if (left == 1) {
            current = ptr;
        }
        else current = ptr->next;
        ListNode* next = current->next;
        ListNode* reverseHead = current;
        for (int i = 0; i < right - left + 1; i++) {
            current->next = pre;
            pre = current;
            current = next;
            if (next) 
                next = next->next;
            else next = NULL;
        }
        reverseHead->next = current;
        if (left!=1)
            ptr->next = pre;
        if (left == 1) return pre;
        else return head;
    }
};
