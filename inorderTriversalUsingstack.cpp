// ques-https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         if(root == NULL){
//             return ans;
//         }
//         stack <TreeNode *> st;
//         st.push(root);
//         while(!st.empty()){
//             TreeNode *curr = st.top();
//             st.pop();
//             ans.push_back(curr->val);
//             if(curr->right!=NULL){
//                 st.push(curr->right);
//             }
//             if(curr->left!=NULL){
//                 st.push(curr->left);
//             }
            
//         }
//         return ans;
//     }
// };