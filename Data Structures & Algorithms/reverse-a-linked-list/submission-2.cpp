// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
      
//         if (head == nullptr || head->next == nullptr)
//             return head;

//         stack<int> st;
//         ListNode* temp = head;

      
//         while (temp != nullptr) {
//             st.push(temp->val);
//             temp = temp->next;
//         }

       
//         temp = head;
//         while (!st.empty()) {
//             temp->val = st.top();
//             st.pop();
//             temp = temp->next;
//         }

//         return head;
//     }
// };





class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* curr=head,*prev=nullptr;
      while(curr){
        ListNode* temp=curr->next;
     
        curr->next=prev;
        prev=curr;
        curr=temp;
      }
        return prev;
    }
};