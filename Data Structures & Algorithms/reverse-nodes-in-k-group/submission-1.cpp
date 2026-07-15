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
ListNode* reverse(ListNode*head){
    ListNode*prev=NULL;
    ListNode*curr=head;
    while(curr!=NULL){
        ListNode*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            if(temp==NULL){
                return head;

            }
            temp=temp->next;
        }
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
      head->next=reverseKGroup(curr,k);
      return prev;
    }
};
