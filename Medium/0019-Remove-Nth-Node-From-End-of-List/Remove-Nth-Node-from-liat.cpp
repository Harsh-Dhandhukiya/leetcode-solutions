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
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Advance fast pointer by n + 1 steps
        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        // Move fast to the end while keeping slow at a delay of n steps
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Unlink the nth node from the end
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete; // Free memory

        ListNode* newHead = dummy->next;
        delete dummy; // Free dummy node
        return newHead;
    }
};