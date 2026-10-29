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

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;

        if (root == nullptr) return ans;

        st.push(root);

        while (!st.empty()) {
            TreeNode* lh = st.top();
            st.pop();
            ans.push_back(lh->val);
            if (lh->right != nullptr) {
                st.push(lh->right);
            }
            if (lh->left != nullptr) {
                st.push(lh->left);
            }
        }
        return ans;
    }
};
