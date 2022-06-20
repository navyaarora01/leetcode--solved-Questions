
// ques - https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/
/*class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        queue <TreeNode *> q;
        q.push(root);
        bool lefttoright = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> row(size);
            for(int i =0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                int index = (lefttoright)? i :( size-1-i);
                row[index] = curr -> val;

                  if(curr->left){
                    q.push(curr->left);
                   }
                if(curr->right){
                   q.push(curr->right);
               }
           }
             lefttoright = !lefttoright;
            ans.push_back(row);

        }
        return ans;
    }
};
*/