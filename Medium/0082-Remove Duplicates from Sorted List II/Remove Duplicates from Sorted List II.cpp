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
    ListNode* deleteDuplicates(ListNode* head) {
        // Create a dummy node that points to the head
        ListNode* dummy = new ListNode(0, head);
        
        // prev points to the last node in the list of distinct numbers
        ListNode* prev = dummy;
        
        while (head != nullptr) {
            // Check if it's the beginning of a duplicates sublist
            if (head->next != nullptr && head->val == head->next->val) {
                // Move head to the last node of the duplicates sublist
                while (head->next != nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                // Skip all duplicates
                prev->next = head->next;
            } else {
                // No duplicate detected, simply advance the prev pointer
                prev = prev->next;
            }
            // Move head forward to evaluate the next potential sequence
            head = head->next;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy; // Free the allocated memory for dummy node
        return newHead;
    }
};