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
private:
pair<bool,int> isBalancedFast(TreeNode* root){
    if(root == NULL) {
    pair<bool,int> p = make_pair(true,0);
    return p ;
    } 
    pair<int,int> left = isBalancedFast(root->left);
    pair<int,int> right = isBalancedFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diff = abs(left.second - right.second) <= 1;
    pair<bool,int> ans;
    ans.second = max(left.second,right.second) + 1; 
    if(leftAns && rightAns && diff) ans.first = true;
    else ans.first = false;
    return ans;
}
public:
    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};
class Solution {
public:
    bool ans = true;
    int solve(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        if(abs(left-right)>1)
            ans = false;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return ans;
    }
};