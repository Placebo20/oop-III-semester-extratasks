class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* root1 = l1, * root2 = l2;
        static ListNode tmp(0);

        tmp.next = root1;
        ListNode* previous = &tmp;

        while (root1 && root2) {
            if (root1->val < root2->val) {
                previous = root1;
                root1 = root1->next;
            }
            else {
                previous->next = root2;
                root2 = root2->next;
                previous = previous->next;
                previous->next = root1;
            }
        }
        if (root2) {
            previous->next = root2;
        }

        return tmp.next;

    }
};