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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* dum=head;
        ListNode* first=head->next;
        ListNode* odd=first;
        while(first && first->next){
            dum->next=first->next;
            dum=dum->next;
            first->next=dum->next;
            first=first->next;
        }
        dum->next=odd;
        return head;
    }
};