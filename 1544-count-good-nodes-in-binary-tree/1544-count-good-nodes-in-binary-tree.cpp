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
  int goodNodes(TreeNode* root) {
    ll c = 0, mx = INT_MIN;
    helper(root, c, mx);
    return c;
  }

  void helper(TreeNode* root, ll& c, ll mx) {
    if(!root) {
      return;
    }
    if(root->val >= mx) {
      mx = root->val;
      c++;
    }
    helper(root->left, c, mx);
    helper(root->right, c, mx);
  }
};