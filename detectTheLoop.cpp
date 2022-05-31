// Here is the questiom  -- https://leetcode.com/problems/linked-list-cycle/submissions/
#include<bits/stdc++.h>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast!=slow){
            if(fast==NULL || fast->next == NULL){
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return true;
    }
};