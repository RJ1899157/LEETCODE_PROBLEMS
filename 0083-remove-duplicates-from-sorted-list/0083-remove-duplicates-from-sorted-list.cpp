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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p,*q;
        q=head;

        while (q && q->next){
            p=q->next;
            if (q->val==p->val){
                q->next=p->next;
                p->next=nullptr;
                delete p;
            }
            else{
                q=q->next;
            }
        }
        
        return head;
    }
};