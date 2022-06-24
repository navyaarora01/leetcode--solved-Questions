// ques - https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/ 

/*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode *curr = head;
        while(curr!=NULL){
            if(curr->next!=NULL &&curr->val== curr->next->val ){
                ListNode* n = curr->next;
                curr->next = curr->next->next;
                delete n;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};
*/