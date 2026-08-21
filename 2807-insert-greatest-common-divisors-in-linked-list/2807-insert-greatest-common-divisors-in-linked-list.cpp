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
        ListNode* p = head;
        while (p && p->next){
            int g = gcd(p->val, p->next->val);

            ListNode *temp = new ListNode(g);
            temp->next=p->next;
            p->next=temp;
            p=temp->next;
        }
        return head;
    }
};