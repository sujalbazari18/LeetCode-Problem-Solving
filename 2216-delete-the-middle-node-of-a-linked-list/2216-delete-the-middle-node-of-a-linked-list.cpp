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
    ListNode* deleteMiddle(ListNode* head) {
        int l=0;
        if(!head  || !head->next)return NULL;
        ListNode* dum=head;
        while(dum){
            dum=dum->next;
            l++;
        }
        dum=head;
        ListNode* prev=NULL;
        int n=l/2;
        for(int i=0;i<n;i++){
            prev=dum;
            dum=dum->next;
        }
        prev->next=dum->next;
        delete dum;
        return head;
    }
};