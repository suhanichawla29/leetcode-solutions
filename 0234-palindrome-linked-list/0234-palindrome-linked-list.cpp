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
    bool isPalindrome(ListNode* head) {
        ListNode* temp;
        temp=head;
        ListNode* ptemp;
        ptemp=head;
        while(temp!=NULL && temp->next != NULL){
            ptemp=ptemp->next;
            temp=temp->next->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = ptemp;

 while (curr != NULL) {
    ListNode* nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;
}

    ListNode* first = head;
ListNode* second = prev;

while (second != NULL) {
    if (first->val != second->val) {
        return false;
    }
    first = first->next;
    second = second->next;
}

return true;
} 
};