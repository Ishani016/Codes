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
    ll c = 0, n = 0, cn = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) {
            return 0;
        }
        if(n==0) {
            pathSum(root, cn, n, targetSum);
        }
        if(cn==n) {
            return (n*(n+1))/2;
        }
        ll s = 0;
        // cout<<c<<" "<<s<<" "<<root->val<<endl;
        helper(root, c, s, targetSum);
        // return c;
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        return c;
    }

    void pathSum(TreeNode* root, ll& cn, ll& n, ll targetSum) {
        if(!root) {
            return;
        }
        if(root->val == targetSum) {
            cn++;
        }
        n++;
        pathSum(root->left, cn, n, targetSum);
        pathSum(root->right, cn, n, targetSum);
    }

    void helper(TreeNode* root, ll& c, ll s, ll targetSum) {
        if(!root) {
            return;
        }
        // cout<<root->val<<" "<<s<<endl;
        if(s+root->val == targetSum) {
            cout<<"Sum found at "<<root->val<<endl;
            c++;
        }
        helper(root->left, c, s+root->val, targetSum);
        // helper(root->left, c, 0, targetSum);
        helper(root->right, c, s+root->val, targetSum);
        // helper(root->right, c, 0, targetSum);
    }
};