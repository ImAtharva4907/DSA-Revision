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
    private:
        void solve(TreeNode* root,vector<int> &arr,int lvl)
        {
            if(root==nullptr)
            {
                return;
            }
    
            if(arr.size()==lvl)
            {
                arr.push_back(root->val);
      
            }
            solve(root->right,arr,lvl+1);
            solve(root->left,arr,lvl+1);
        }
    public:
        vector<int> rightSideView(TreeNode* root) {
            vector<int> ans;
            int l = 0;
            solve(root,ans,l);
            return ans;
        }
    };
int main() {
    
    return 0;
}