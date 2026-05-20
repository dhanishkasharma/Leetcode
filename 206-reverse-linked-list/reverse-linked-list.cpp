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
    ListNode* reverseList(ListNode* head) {

        ListNode* temp=head;
        ListNode* temp1=head;
        ListNode* back=nullptr;
        while(temp1!=nullptr){
            temp1=temp->next;
            temp->next=back;
            back=temp;
            temp=temp1;
        }

        return back;
        
    }
};