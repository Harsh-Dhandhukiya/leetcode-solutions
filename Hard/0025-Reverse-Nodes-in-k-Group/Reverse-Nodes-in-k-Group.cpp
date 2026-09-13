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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        // Step 1: Count the total number of nodes
        int count = 0;
        ListNode* curr = head;
        while (curr) {
            count++;
            curr = curr->next;
        }
        
        // Step 2: Use a dummy node to easily handle the head of the list
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroupTail = &dummy;
        curr = head;
        
        // Step 3: Reverse groups of size k
        while (count >= k) {
            ListNode* prev = nullptr;
            ListNode* next = nullptr;
            ListNode* groupHead = curr; // After reversal, this will be the tail of the group
            
            // Standard linked list reversal for k nodes
            for (int i = 0; i < k; i++) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            
            // Connect the reversed group back to the main list
            prevGroupTail->next = prev; // Connect previous part to the new head of this group
            groupHead->next = curr;     // Connect the new tail of this group to the next part
            
            // Move prevGroupTail up to the tail of the current group for the next iteration
            prevGroupTail = groupHead;
            
            // Decrease the remaining count of nodes
            count -= k;
        }
        
        return dummy.next;
    }
};