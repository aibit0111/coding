/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    
        
        queue<TreeNode *> q;
        vector<vector<int>> result;
        
        if(root == NULL) return result;
        
        q.push(root);
        vector<int> op;
        TreeNode *temp;
        int level = 0;
        int size;
        while(!q.empty()){
            op.clear();
            size = q.size();
            for(int i = 0; i<size; i++){
                 temp = q.front();
                 q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                op.push_back(temp->val);
            }
            
            if(level%2==0) result.push_back(op);
            
            else {
                reverse(op.begin(), op.end());
                result.push_back(op);
            }
            level++;
        }
        
        return result;
    }
};