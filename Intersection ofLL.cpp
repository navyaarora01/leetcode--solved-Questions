// ques - https://leetcode.com/problems/intersection-of-two-linked-lists/ 
/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode *> node;
        ListNode *a = headA;
        ListNode *b = headB;
        while(a!=NULL){
            node.insert(a);
            a = a->next;
            
        }
        
        while(b!=NULL){
            if(node.find(b) !=node.end()){
                return b;
            }
            b = b->next;
        }
        return NULL;
    }
};
*/