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
    int res = 1;
    void solve(TreeNode *root, int d)
    {
        if (root == nullptr)
            return;
        res = max(d, res);

        solve(root->left, d + 1);
        solve(root->right, d + 1);
    }
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        solve(root, 1);
        return res;
    }
};
int main()
{

    return 0;
}