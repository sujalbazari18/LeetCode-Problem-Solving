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
        ListNode* dum=head;
        // int len=0;
        vector<int> v;
        while(dum){
            v.push_back(dum->val);
            dum=dum->next;
        }
        int maxSum=0;
        for(int i=0;i<v.size();i++){
            maxSum=max(maxSum,v[i]+v[v.size()-i-1]);
        }
        return maxSum;
    }
};