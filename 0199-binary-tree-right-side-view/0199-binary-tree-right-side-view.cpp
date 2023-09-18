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
typedef int ll;
#define pb push_back
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<ll> v;
        queue<TreeNode*> q;
        if(!root) {
            return v;
        }
        q.push(root);
        q.push(NULL);
        while(q.size()>1) {
            TreeNode* top = q.front();
            q.pop();
            if(!q.front() && top) {
                v.pb(top->val);
            }
            if(top) {
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            } else {
                q.push(NULL);
            }
        }
        return v;
    }
};