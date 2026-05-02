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
        ListNode* temp=head;
        ListNode* slow=new ListNode(0,head);
        ListNode* dummy=slow;
        while(temp!=nullptr){

           if(slow->next->val==val){
                slow->next=temp->next;

            }

            else{
                slow=temp;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};