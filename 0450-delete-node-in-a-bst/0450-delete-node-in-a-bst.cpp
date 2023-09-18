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
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<ll> v;
        if(!root) {
            return root;
        }
        preOrder(root, v);
        ll n = v.size();
        if(find(v.begin(), v.end(), key) != v.end()) {
            n--;
            std::remove(v.begin(), v.end(), key);
        }
        root = buildTree(v, 0, n);
        return root;
    }

    void preOrder(TreeNode* root, vector<ll>& v) {
        if(!root) {
            return;
        }
        preOrder(root->left, v);
        v.pb(root->val);
        preOrder(root->right, v);
    }

    TreeNode* buildTree(vector<ll>& v, ll i, ll j) {
        if(i>=j) {
            return NULL;
        }
        ll mid = i+(j-i)/2;
        TreeNode* node = new TreeNode(v[mid]);
        node->left = buildTree(v, i, mid);
        node->right = buildTree(v, mid+1, j);
        return node;
    }
};