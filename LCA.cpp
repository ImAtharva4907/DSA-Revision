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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr || root == p || root == q)
        {
            return root;
        }

        TreeNode *Left = lowestCommonAncestor(root->left, p, q);
        TreeNode *Right = lowestCommonAncestor(root->right, p, q);

        if (Left == nullptr)
        {
            return Right;
        }
        else if (Right == nullptr)
        {
            return Left;
        }
        else
        {
            return root;
        }
    }
};
int main()
{

    return 0;
}