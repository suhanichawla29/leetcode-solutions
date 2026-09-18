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
        ListNode* temp;
        ListNode* ptemp;
        temp=head;
        ptemp=head;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next->next;
            ptemp=ptemp->next;
        }
       return ptemp; 
    }
};