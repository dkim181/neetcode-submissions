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
    bool hasCycle(ListNode* head) {
        // Initialize two pointers, 
        // one moving is fast and the other moving slow.
        ListNode* slow = head;
        ListNode* fast = head;

        // The loop continues as long as the fast pointer moves forward.
        while(fast != nullptr && fast->next != nullptr ) {
            slow = slow->next;
            fast = fast->next->next;

            // If the fast and slow pinters meet, a cycle exists.
            if(slow == fast){
                return true;
            }
        }        

        // If the loop end, it means that fast pointers  hase reached the end of the list. 
        // There is no cycle
        return false;

        // // Use a hashset to track visited nodes.
        // unordered_set<ListNode*> check;

        // // Declare current pointer to traverse the list from the head
        // ListNode* curr = head; 
        // while(curr) {
        //     // If the current node is already in our set,
        //     // a cycle exists.
        //     if(check.find(curr) != check.end()) {
        //         return true;
        //     }
        //     // Add the current pointer to the set.
        //     check.insert(curr);

        //     // Move to the next node.
        //     curr = curr->next;
        // }

        // // If we reach the end of the list, there is no cycle.
        // return false;
    }
};
