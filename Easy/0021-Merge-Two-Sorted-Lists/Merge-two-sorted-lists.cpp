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
        // Create a dummy node to simplify edge cases and act as the start of the merged list
        ListNode dummy(0);
        ListNode* current = &dummy;
        
        // Traverse both lists as long as neither is null
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            // Move the current pointer forward
            current = current->next;
        }
        
        // If one of the lists is exhausted, attach the remainder of the other list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }
        
        // Return the head of the merged list (skipping the dummy node)
        return dummy.next;
    }
};