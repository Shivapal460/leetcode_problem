/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;

        while (pointerA != pointerB) {
            if (pointerA == nullptr) {
                pointerA = headB;
            }
            else {
                pointerA = pointerA->next;
            }
            if (pointerB == nullptr) {
                pointerB = headA;
            }
            else {
                pointerB = pointerB->next;
            }
        }
        return pointerA;
    }
};