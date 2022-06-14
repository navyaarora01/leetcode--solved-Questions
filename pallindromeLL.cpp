// ques - https://leetcode.com/problems/palindrome-linked-list/
/*
class Solution {
private:
    ListNode *middle(ListNode* head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        return slow;
    }
    ListNode *reverse(ListNode  *head){
        ListNode *next = NULL;
        ListNode *prev = NULL;
        while(head!=NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        ListNode *mid = middle(head);
        ListNode *last = reverse(mid);
        ListNode *curr = head;
        while(last!=NULL){
            if(curr->val != last->val){
               return false;
            }
             curr->next;
             last->next;
        }
        return true;
    }
};
*/