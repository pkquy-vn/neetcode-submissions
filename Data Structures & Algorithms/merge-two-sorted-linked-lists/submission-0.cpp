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
        // 1. Create a dummy node to act as the anchor
        ListNode dummy(0);
        ListNode* current = &dummy;

        // 2. Traverse both lists as long as neither is empty
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

        // 3. Attach any remaining nodes from either list
        if (list1 != nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        // 4. Return the actual start of the merged list
        return dummy.next;
    }
};
