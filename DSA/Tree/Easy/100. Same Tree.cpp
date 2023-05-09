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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isSameTree(TreeNode *r1, TreeNode *r2)
    {
        if(!r1 && !r2) return true;
        if(!r1 && r2) return false;
        if(r1 && !r2) return false;
        
        bool left = isSameTree(r1->left,r2->left);
        bool right = isSameTree(r1->right,r2->right);
        bool val = r1->val == r2->val;
        if(left && right && val) return true;
        else return false;
    }
};
