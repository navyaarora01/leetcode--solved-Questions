// ques - https://leetcode.com/problems/merge-nodes-in-between-zeros/

/*class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newhead = new ListNode(0);
        ListNode* curr = newhead;
        ListNode* temp = head;
        int sum = 0;
        temp = temp->next;
        while(temp){
            
            while(temp->val!=0){
                sum += temp->val;
                temp= temp->next;
            }
            
            curr->next = new ListNode(sum);
            curr = curr->next;
            temp = temp->next;
            sum = 0;
        }
        return newhead->next;
    }
};
*/