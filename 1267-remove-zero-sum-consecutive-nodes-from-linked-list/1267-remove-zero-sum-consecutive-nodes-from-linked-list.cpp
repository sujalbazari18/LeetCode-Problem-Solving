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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dum=new ListNode(0);
        dum->next=head;
        unordered_map<int,ListNode*> mp;
        ListNode* curr=dum;
        int sum=0;
        while(curr){
            sum+=curr->val;
            mp[sum]=curr;
            curr=curr->next;
        }
        curr=dum;
        sum=0;
        while(curr){
            sum+=curr->val;
            curr->next=mp[sum]->next;
            curr=curr->next;
        }
        return dum->next;
    }
};