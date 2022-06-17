// ques - https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/ 
/*
class Solution {
public:
    int summax(TreeNode* root , int &maxsum){
        if(root == NULL){
            return 0;
        }
        int left = max(0,summax(root->left , maxsum));
        int right = max(0,summax(root->right  , maxsum));
        maxsum = max(maxsum , left+right+root->val);
        return max(right,left)+root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;
        summax(root , maxsum);
        return maxsum;
    }
};
*/
