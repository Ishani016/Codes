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
 typedef long long int ll;
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) {
            return false;
        }
        bool ans  = false;
        ll s = 0;
        hasSum(root, targetSum, s, ans);
        return ans;
    }

    void hasSum(TreeNode* root, int targetSum, ll s, bool& ans) {
        if(!root) {
            return;
        }
        if(!root->left && !root->right and s+root->val == targetSum) {
            ans = true;
            return;
        }
        s += root->val;
        hasSum(root->left, targetSum, s, ans);
        hasSum(root->right, targetSum, s, ans);
    }
};