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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) 
            return false;
        queue<TreeNode*> q ;
        q.push(root);
        while(!q.empty()) {
            int size=q.size();
            bool isxexist= false;
            bool isyexist= false;
            for(int i=0;i<size;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                if(cur->val==x) 
                    isxexist=true;
                if(cur->val==y)
                    isyexist=true;
                if(cur->left!=NULL && cur->right!=NULL)
                {
                    if(cur->left->val==x && cur->right->val==y)
                    {
                        return false;
                    }
                    if(cur->left->val==y && cur->right->val==x)
                    {
                        return false;
                    }
                }
                if(cur->left!=NULL)
                {
                    q.push(cur->left);
                }
                if(cur->right!=NULL)
                {
                    q.push(cur->right);
                }
            }
            if(isxexist && isyexist)
                return true;
        }
            return false;
     }
        
};
    
