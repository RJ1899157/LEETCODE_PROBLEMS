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
        if (!headA || !headB) return NULL;
        ListNode *p=headA;
        ListNode *q=headB;
        int countA=0,countB=0;
        while(p!=NULL){
            p=p->next;
            countA++;
        }
        while (q != NULL) {
            countB++;
            q = q->next;
        }
        p = headA;
        q = headB;
        if (countA > countB) {
            for (int i = 0; i < countA - countB; i++) {
                p = p->next;
            }
        } else {
            for (int i = 0; i < countB - countA; i++) {
                q = q->next;
            }
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
        return p;

    }
};