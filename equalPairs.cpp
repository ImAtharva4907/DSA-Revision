#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int equalPairs(vector<vector<int>> &grid)
{
    int n = grid.size();
    int res = 0;
    map<vector<int>, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[grid[i]]++;
    }

    for (int j = 0; j < n; j++)
    {
        vector<int> col(n);
        for (int i = 0; i < n; i++)
        {
            col[i] = grid[i][j];
        }
        res += mp[col];
    }

    return res;
}
int main()
{

    return 0;
}