/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* dum=head;
        while(dum){
            if(dum->child){
                Node* child=dum->child;
                Node* next=dum->next;
                Node* tail=child;
                while(tail->next){
                    tail=tail->next;
                }
                dum->next=child;
                child->prev=dum;
                if(next){
                    tail->next=next;
                    next->prev=tail;
                }
                dum->child=NULL;
            }
            dum=dum->next;
        }
        return head;
    }
};