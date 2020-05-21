class Solution {
public:
    TreeNode* kthSmallest(TreeNode* root, int &count, int k) 
{ 
    if (root == NULL) 
        return NULL; 
    TreeNode* temp = kthSmallest(root->left, count, k);  
    if (temp != NULL) 
        return temp; 
    count++; 
    if (count == k) 
        return root; 
    return kthSmallest(root->right, count, k); 
} 
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        TreeNode* p = kthSmallest(root,count,k);
        if(p==NULL)
            return 0;
        return p->val;
    }
};
