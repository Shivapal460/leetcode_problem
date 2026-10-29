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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        TreeNode* lh = root;

        while (lh != nullptr || !st.empty()) {
            while (lh != nullptr) {
                st.push(lh);
                lh = lh->left;
            }

            lh = st.top();
            st.pop();

            ans.push_back(lh->val);
            lh = lh->right;
        }

        return ans;
    }
};
