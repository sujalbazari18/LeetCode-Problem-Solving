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
    int pairSum(ListNode* head) {
        ListNode* dum=NULL;
        ListNode* curr=head;
        ListNode* half=head;
        while(half){
            half=half->next->next;
            ListNode* temp=curr->next;
            curr->next=dum;
            dum=curr;
            curr=temp;
        }
        int ans=0;
        while(curr){
            ans=max(ans,(curr->val+dum->val));
            curr=curr->next;
            dum=dum->next;
        }
        return ans;
    }
};