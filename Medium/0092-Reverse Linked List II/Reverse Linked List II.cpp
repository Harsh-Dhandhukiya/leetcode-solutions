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
        if (!head || left == right) return head;

        // Stack-allocated dummy node handles edge cases when left == 1
        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        // 1. Advance prev to the node right before position `left`
        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        // 2. Reverse nodes between `left` and `right` via head-insertion
        ListNode* curr = prev->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
        }

        return dummy.next;
    }
};