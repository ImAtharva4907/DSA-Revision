#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int longestSubarray(vector<int> &nums)
{
    int n = nums.size();
    int res = 0;
    int i = 0, cnt = 0;

    for (int j = 0; j < n; j++)
    {
        cnt += nums[j];

        while (cnt + 1 < j - i + 1)
        {
            cnt -= nums[i];
            i++;
        }
        res = max(res, j - i + 1);
    }

    return --res;
}
int main()
{

    return 0;
}