/*https://leetcode.com/problems/palindrome-linked-list/submissions/*/


 //* Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast;
        fast=slow=head;
        // Step 1: Find the middle of the linked list
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast)
            fast=fast->next;
        }
        //step 2: reverse the second half of the ll
        ListNode *prev,*curr,*nextptr;
        prev=NULL;
        curr=slow;
        while(curr){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        //step 3. compare 1st half with 2nd half
        ListNode *t=head;
        while(t!=slow){
            if(t->val!=prev->val)
            return 0;
            t=t->next;
            prev=prev->next;
        }
        return 1;

       
    }
};