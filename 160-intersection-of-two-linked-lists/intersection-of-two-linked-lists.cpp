/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;

        int c=0;
        int p=0;


        while(temp1!=nullptr){
            temp1=temp1->next;
            c++;
        }

        temp1=headA;

        while(temp2!=nullptr){
            temp2=temp2->next;
            p++;
        }
        temp2=headB;
        int l=c-p;
         int z=p-c;

        if(l>0){
            while(l!=0){
            if(temp2)    temp1=temp1->next;
            l--;
            }

        }
   
        else if(l<0){
            while(z!=0){
              if(temp2) temp2=temp2->next;
              z--;
            }
        

        
}


        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1==temp2){
                return temp1;
            }

            temp1=temp1->next;
            temp2=temp2->next;
        }

        return nullptr;
        
    }
};