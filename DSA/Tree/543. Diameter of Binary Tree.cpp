class Solution {
    private:
    pair<int,int> diameter(TreeNode* root){
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int> left = diameter(root->left);
        pair<int,int>right = diameter(root->right);

        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second,right.second)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first-1;
    }
};





//  another approach is 
class Solution {
	public:
int ans=0;

int height(TreeNode* root)
{
    if(!root) return 0;
    
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    
    ans= max(ans, 1 + lHeight + rHeight);
    return 1+ max( lHeight , rHeight);

}

int diameterOfBinaryTree(TreeNode* root) {
    if(!root) return 0;
    height(root);
    return ans-1;
}
  
  
//    https://leetcode.com/problems/diameter-of-binary-tree/solutions/706724/c-solution-with-explanation/
