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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return nullptr;
        ListNode *p,*q;
        p=head;
        int len=0;
        while(p){
            len++;
            p=p->next;
        }
        int mid=len/2;
        p=head;
        while(mid>0){
            q=p;
            p=p->next;
            mid--;
        }
        q->next=p->next;
        return head;
        
    }
};