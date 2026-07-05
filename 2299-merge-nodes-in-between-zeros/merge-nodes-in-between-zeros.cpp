class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* headnew = NULL;
        ListNode* last = NULL;
        ListNode* temp = head;

        if (head == NULL) return NULL;

        int sum = 0;
        temp = temp->next;

        while (temp != NULL) {
            if (temp->val == 0) {
                ListNode* newNode = new ListNode(sum);

                if (headnew == NULL) {
                    headnew = newNode;
                    last = newNode;
                } else {
                    last->next = newNode;
                    last = newNode;
                }

                sum = 0;
            } else {
                sum += temp->val;
            }

            temp = temp->next;
        }

        return headnew;
    }
};