// ques - https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/ 
/*ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode*  reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp;
        while(curr){
            temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* mid = getmid(head);
        ListNode* rev = reverse(mid);
        int sum = INT_MIN;
        while(head && rev){
            sum = max(sum,(head->val+rev->val));
            head = head->next;
            rev = rev->next;
        }
        return sum;
    }
    */