#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> // for reverse
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {
        if (!root)
            return {};

        vector<int> result;
        stack<TreeNode *> stack;
        stack.push(root);

        while (!stack.empty())
        {
            TreeNode *current = stack.top();
            stack.pop();
            result.push_back(current->val);

            // Push left first, so that right is processed first when reversing the result
            if (current->left)
            {
                stack.push(current->left);
            }
            if (current->right)
            {
                stack.push(current->right);
            }
        }

        // Since postorder is left, right, root, we need to reverse the result
        reverse(result.begin(), result.end());
        return result;
    }
};

// Function to create a test binary tree and run the postorder traversal
void testPostorderTraversal()
{
    // Example tree:
    //       1
    //        \
    //         2
    //        /
    //       3

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> result = sol.postorderTraversal(root);

    // Output the result
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    // Expected output: 3 2 1
}

int main()
{
    testPostorderTraversal();
    return 0;
}
