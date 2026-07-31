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
    ListNode* middleNode(ListNode* head) {
        ListNode *p,*q;
        p=head;
        q=head;
        int count=1;
        while(p->next){
            p=p->next;
            count++;
        }
        count=count/2;
        for (int i=0;i<count;i++){
            q=q->next;
        }
        return q;
    }
};