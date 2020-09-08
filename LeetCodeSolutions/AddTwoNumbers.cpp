class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x = 0, y = 0, cr = 0, summ = 0;
        ListNode* h = NULL, ** t = &h;

        while (l1 != NULL || l2 != NULL) {
            x = gvmn(l1);
            y = gvmn(l2);

            summ = cr + x + y;

            ListNode* node = new ListNode(summ % 10);
            *t = node;
            t = (&node->next);

            cr = summ / 10;
        }

        if (cr > 0) {
            ListNode* node = new ListNode(cr % 10);
            *t = node;
        }

        return h;
    }
private:
    int gvmn(ListNode*& l) {
        int x = 0;
        if (l != NULL) {
            x = l->val;
            l = l->next;
        }
        return x;
    }
};
