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
#include <queue>
#include <vector>

class Solution {
public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        // Custom comparator for min-heap to order nodes by value ascending
        auto compare = [](ListNode* a, ListNode* b) {
            return a->val > b->val;
        };
        
        std::priority_queue<ListNode*, std::vector<ListNode*>, decltype(compare)> minHeap(compare);
        
        // Push the head node of each non-empty linked list into the heap
        for (ListNode* list : lists) {
            if (list != nullptr) {
                minHeap.push(list);
            }
        }
        
        ListNode dummy(0);
        ListNode* current = &dummy;
        
        // Repeatedly extract the smallest node and push its next node into the heap
        while (!minHeap.empty()) {
            ListNode* smallestNode = minHeap.top();
            minHeap.pop();
            
            current->next = smallestNode;
            current = current->next;
            
            if (smallestNode->next != nullptr) {
                minHeap.push(smallestNode->next);
            }
        }
        
        return dummy.next;
    }
};