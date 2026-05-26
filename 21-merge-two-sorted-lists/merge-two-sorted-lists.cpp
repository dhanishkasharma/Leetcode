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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> ans;

        ListNode* temp1=list1;
        ListNode* temp2=list2;

        while(temp1!=nullptr){
            ans.push_back(temp1->val);
            temp1=temp1->next;
        }

            while(temp2!=nullptr){
            ans.push_back(temp2->val);
            temp2=temp2->next;
        }

        sort(ans.begin(),ans.end());

        ListNode* ans1=new ListNode(-1);

        ListNode* dance=ans1;
        
        for(int i=0;i<ans.size();i++){
            dance->next=new ListNode(ans[i]);
            dance=dance->next;
        }

        ListNode* newhead=ans1->next;
        ans1->next=nullptr;
        delete ans1;
        return newhead;
    }
};