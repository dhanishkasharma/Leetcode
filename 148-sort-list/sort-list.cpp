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
   ListNode* merger(ListNode* head){
    if(head==nullptr || head->next==nullptr) return head;

     ListNode* low=head;
        ListNode* mid=middle(head);
        ListNode* high=mid->next;
        mid->next=nullptr;

      ListNode* left=merger(low);
       ListNode* right= merger(high);
     return sorting(left,right);







   }

  ListNode* middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
  }

    ListNode* sorting(ListNode* slow,ListNode* fast){
        ListNode* dummy=new ListNode(-1);
        ListNode* ans=dummy;
        ListNode* t1=slow;
        ListNode* t2=fast;

        while(t1!=nullptr && t2!=nullptr){
            if(t1->val<t2->val){
                ans->next=t1;
                ans=t1;
                t1=t1->next;
            }

            else{
                ans->next=t2;
                ans=t2;
                t2=t2->next;
                
            }
        }

        if(t1){
          ans->next=t1;
        }

        else{
            ans->next=t2;
        }

        return dummy->next;
    }
  
    ListNode* sortList(ListNode* head) {
        //merge sort 
        //need to find middle element 
        ListNode* newhead=merger(head);


        return newhead;
        
        
    }
};