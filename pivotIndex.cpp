#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int rightSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < n; i++)
    {
        rightSum = rightSum - nums[i];
        if (leftSum == rightSum)
        {
            return i;
        }
        leftSum = leftSum + nums[i];
    }
    return -1;
}
int main()
{

    return 0;
}