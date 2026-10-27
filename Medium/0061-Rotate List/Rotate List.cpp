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
    ListNode* rotateRight(ListNode* head, int k) {
        // Handle edge cases: empty list, single node, or no rotation
        if (!head || !head->next || k == 0) {
            return head;
        }

        // Step 1: Find the length of the list and the tail node
        ListNode* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // Step 2: Optimize k to avoid unnecessary full rotations
        k = k % length;
        if (k == 0) {
            return head;
        }

        // Step 3: Find the new tail, which is at index (length - k - 1)
        ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }

        // Step 4: Perform the rotation
        ListNode* newHead = newTail->next;
        newTail->next = nullptr; // Break the list
        tail->next = head;       // Connect old tail to old head

        return newHead;
    }
};