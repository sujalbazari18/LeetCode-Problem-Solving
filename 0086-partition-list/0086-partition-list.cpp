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
    ListNode* partition(ListNode* head, int x) {
        ListNode* start=new ListNode(0);
        ListNode* dummy1=start;
        ListNode* end=new ListNode(0);
        ListNode* dummy2=end;
        ListNode* dummy=head;
        while(dummy){
            if(dummy->val<x){
                start->next=dummy;
                start=start->next;
            }
            else{
                end->next=dummy;
                end=end->next;
            }
            dummy=dummy->next;
        }
        end->next=NULL;
        start->next=dummy2->next;
        return dummy1->next;
    }
};