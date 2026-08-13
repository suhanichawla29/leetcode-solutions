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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp;
        ListNode* ptemp=NULL;
        temp=head;
        while(temp!=NULL){
            if(temp->val==val){
            if (ptemp == NULL) {
            head = temp->next;
            delete temp;
            temp = head;
            }
            else{
            ptemp->next = temp->next;
            delete temp;
            temp = ptemp->next;
            }
         
        }
        else{
             ptemp = temp;
            temp = temp->next;
        }
    }


 return head;
}};