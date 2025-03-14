#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
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
    int res = 0;
    void dfs(TreeNode *node, int currMax)
    {
        if (!node)
            return;

        if (node->val >= currMax)
        {
            res++;
            currMax = node->val;
        }

        dfs(node->left, currMax);
        dfs(node->right, currMax);
    }
    int goodNodes(TreeNode *root)
    {
        int n = INT_MIN;
        dfs(root, n);
        return res;
    }
};
int main()
{

    return 0;
}