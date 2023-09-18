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
    int maxLevelSum(TreeNode* root) {
        if(!root) {
            return 0;
        }
        queue<TreeNode*> q;
        ll mx = INT_MIN;
        ll s = 0;
        ll l = 1;
        ll n = 0;
        q.push(root);
        q.push(NULL);
        while(q.size() > 1) {
            TreeNode* top = q.front();
            q.pop();
            if(top) {
                s+= top->val;
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            } else {
                n++;
                if(s>mx) {
                    mx = s;
                    l = n;
                }
                s = 0;
                q.push(NULL);
            }
        }
        if(s>mx) {
            l = n+1;
        }
        return l;

    }
};