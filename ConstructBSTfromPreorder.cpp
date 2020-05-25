class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return Builttree(preorder, 0 ,preorder.size()-1);
    }
    TreeNode* Builttree(vector<int>& preorder, int l ,int r){
        if(l > r)
            return nullptr;
        TreeNode* root= new TreeNode(preorder[l]);
        if(l==r)
            return root;
        int k=l+1;
        while(k<=r && preorder[k]<preorder[l])
            k++;
        root->left= Builttree(preorder,l+1,k-1);
        root->right= Builttree(preorder,k,r);
        return root;
    }
};
