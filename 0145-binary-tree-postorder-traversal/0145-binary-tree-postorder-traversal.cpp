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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if(root==nullptr) return ans;
        st.push(root);
        while(!st.empty()){
            TreeNode* lh=st.top();
            st.pop();
            ans.push_back(lh->val);
            if(lh->left!=nullptr){
                st.push(lh->left);
            }
            if(lh->right!=nullptr){
                st.push(lh->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};