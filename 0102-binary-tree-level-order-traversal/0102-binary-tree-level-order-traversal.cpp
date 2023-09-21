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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<ll>> vec;
        if(!root) {
            return vec;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<ll> v;
        while(q.size() > 1) {
            TreeNode* top = q.front();
            q.pop();
            if(top) {
                v.pb(top->val);
                if(top->left) {
                    q.push(top->left);
                }
                if(top->right) {
                    q.push(top->right);
                }
            } else {
                vec.pb(v);
                v.clear();
                q.push(NULL);
            }
        }
        vec.pb(v);
        return vec;
    }
};