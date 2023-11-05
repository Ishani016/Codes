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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<ll> pq;
        helper(root, pq, k);
        return pq.top();
    }

    void helper(TreeNode* root, priority_queue<ll>& pq, ll k) {
        if(!root) {
            return;
        }
        helper(root->left, pq, k);
        pq.push(root->val);
        if(pq.size() > k) {
            pq.pop();
        }
        cout<<"top of pq is: "<<pq.top()<<endl;
        helper(root->right, pq, k);
    }
};