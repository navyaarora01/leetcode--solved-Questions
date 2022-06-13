

// vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> res;
//         stack<TreeNode *> st;
        
//         if (root == NULL)
//             return {};
        
//         st.push(root);
//         while (!st.empty()) {
//             root = st.top()    ;
//             st.pop();
            
//             res.insert(res.begin(), root->val);
            
//             if (root->left)
//                 st.push(root->left);
            
//             if (root->right)
//                 st.push(root->right);
//         }
        
//         return res;
//     }
