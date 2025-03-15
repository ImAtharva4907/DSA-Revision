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
    void dfs(TreeNode *node, vector<int> &arr, int tSum)
    {
        if (!node)
            return;
        arr.push_back(node->val);
        long long sum = 0;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            sum += arr[i];
            if (sum == tSum)
                res++;
        }

        dfs(node->left, arr, tSum);
        dfs(node->right, arr, tSum);

        arr.pop_back();
    }
    int pathSum(TreeNode *root, int tSum)
    {
        vector<int> arr;
        dfs(root, arr, tSum);

        return res;
    }
};
class Solution
{
public:
    int dfs(TreeNode *node, long long currSum, unordered_map<long long, int> &mp, int tSum)
    {
        if (!node)
            return 0;
        currSum += node->val;
        int cnt = mp[currSum - tSum];
        mp[currSum]++;

        cnt += dfs(node->left, currSum, mp, tSum);
        cnt += dfs(node->right, currSum, mp, tSum);

        mp[currSum]--;
        if (mp[currSum] == 0)
            mp.erase(currSum);

        return cnt;
    }
    int pathSum(TreeNode *root, int tSum)
    {
        unordered_map<long long, int> mp;
        mp[0] = 1;

        return dfs(root, (long long)0, mp, tSum);
    }
};
int main()
{

    return 0;
}