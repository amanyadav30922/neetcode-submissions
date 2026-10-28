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
ListNode*  reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    while(curr!=NULL){
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
} 
ListNode* middle(ListNode* head){
    ListNode*  slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;

        }
        ListNode* mid=middle(head);
        ListNode* second=mid->next;
        mid->next=NULL;
        second=reverse(second);
        ListNode* first=head;
        while(second!=NULL){
            ListNode* nextfirst=first->next;
            ListNode* nextsecond=second->next;
            first->next = second;
second->next = nextfirst;

first = nextfirst;
second = nextsecond;
        }

    }
};
