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
class Solution {
    public:
    int maxLevelSum(TreeNode* root) {
        int lvl = 1,cnt=0;
        int mSum = INT_MIN;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int sz = q.size();
            int sum = 0;
            for(int i=0; i<sz; i++)
            {
                TreeNode* node = q.front();
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

                sum+=node->val;
            }
            cnt++;

            if(sum>mSum)
            {
                mSum = sum;
                lvl = cnt;

            }
        }

        return lvl;
    }
    };
int main() {
    
    return 0;
}