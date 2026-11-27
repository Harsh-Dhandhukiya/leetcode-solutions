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
private:
    vector<TreeNode*> memo[9][9];

    vector<TreeNode*> build(int start, int end) {
        // Base case: empty range represents a valid null child
        if (start > end) {
            return {nullptr};
        }
        
        // Return cached list of subtrees if already computed
        if (!memo[start][end].empty()) {
            return memo[start][end];
        }

        vector<TreeNode*> allTrees;
        
        // Try every value i in [start, end] as the root
        for (int i = start; i <= end; ++i) {
            vector<TreeNode*> leftTrees = build(start, i - 1);
            vector<TreeNode*> rightTrees = build(i + 1, end);

            // Combine every possible left subtree with every possible right subtree
            for (TreeNode* left : leftTrees) {
                for (TreeNode* right : rightTrees) {
                    TreeNode* root = new TreeNode(i, left, right);
                    allTrees.push_back(root);
                }
            }
        }

        return memo[start][end] = allTrees;
    }

public:
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};
        return build(1, n);
    }
};