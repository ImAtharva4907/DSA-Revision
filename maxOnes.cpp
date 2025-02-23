#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int res = 0;
    int ones = 0;
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        ones += nums[j];
        while (ones + k < j - i + 1)
        {
            ones -= nums[i];
            i++;
        }

        res = max(res, j - i + 1);
    }

    return res;
}
int main()
{

    return 0;
}