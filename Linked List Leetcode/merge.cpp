/*https://leetcode.com/problems/merge-two-sorted-lists/submissions/*/

/*The ListNode dummy(0); statement creates a dummy node with a value of 0. This node is then used as the head of the linked list. The actual linked list nodes are then added after the dummy node.*/
/* 
Create a dummy node.
ListNode dummy(0);
dummy.next = head;
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode *ans=&dummy;

        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1!=NULL && list2==NULL){
            return list1;
        }
        if(list1==NULL && list2!=NULL){
            return list2;
        }
        while(list1 && list2){
            if(list1->val<list2->val){
                ans->next=list1;
                list1=list1->next;
             }else{
                ans->next=list2;
                list2=list2->next;
            }
            ans=ans->next;
        }

        if(list1!=NULL) 
        ans->next=list1;
        else
        ans->next=list2;
        
        return dummy.next;
    }
};