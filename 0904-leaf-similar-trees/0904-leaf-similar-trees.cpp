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
#define pb push_back
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<ll> v1;
        v1 = leafNodes(root1, v1);
        vector<ll> v2;
        v2 = leafNodes(root2, v2);
        return v1==v2;
    }

    vector<ll> leafNodes(TreeNode* root, vector<ll>& v) {
        if(!root->left && !root->right) {
            v.pb(root->val);
            return v;
        }
        if(root->left) {
            leafNodes(root->left, v);
        }
        if(root->right) {
            leafNodes(root->right, v);
        }
        return v;
    }
};