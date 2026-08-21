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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p,*q;
        p=head;
        q=head->next;
        while (q){
            int x=p->val;
            int y=q->val;
            int m=INT_MIN;
            if(y<x) swap(x,y);
            if (y%x==0) m=x;
            else{
                for (int i=x/2;i>0;i--){
                    if (x%i==0 && y%i==0){
                        m=max(m,i);
                    }
                }
            }
            ListNode *temp=new ListNode(m);
            p->next=temp;
            temp->next=q;
            p=q;
            q=q->next;
        }
        return head;
    }
};