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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp;
        ListNode* list3=&temp;


        while (list1 && list2){
            if (list1->val<=list2->val){
            list3->next=list1;
            list1=list1->next;
            }
            else{
            list3->next=list2;
            list2=list2->next;
            }
            list3=list3->next;
        }
        if (list1==nullptr){
            list3->next=list2;
        }
        else{
            list3->next=list1;
        }
        return temp.next;
    }
};