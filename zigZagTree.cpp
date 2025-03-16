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
    int dfs(TreeNode *node, bool flg, int len)
    {
        if (!node)
            return 0;

        if (flg)
        {
            dfs(node->right, false, len + 1);
            dfs(node->left, true, 1);
        }
        else
        {
            dfs(node->left, true, len + 1);
            dfs(node->right, false, 1);
        }

        res = max(res, len);
        return len;
    }
    int longestZigZag(TreeNode *root)
    {
        dfs(root, true, 0);
        return res;
    }
};
int main()
{

    return 0;
}