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
ListNode* reverse(ListNode* head){
   ListNode* curr=head;
   ListNode* prev=nullptr;
   while(curr){
    ListNode* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
   }
   return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr) return nullptr;
        ListNode* temp=head;
        for(int i=1;i<k;i++){
          if(temp==nullptr) return head;
          temp=temp->next;
        }
        if(temp==nullptr) return head;
         ListNode* nextGroup = temp->next;
        temp->next=nullptr;
        ListNode*newhead= reverse(head);
         head->next = reverseKGroup(nextGroup, k);
        
        return newhead;
    }
};
