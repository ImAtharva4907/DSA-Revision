#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int check(int a, int b)
{
    if (a > 0 && a < abs(b))
    {
        return 1;
    }
    else if (a == abs(b))
    {
        return 0;
    }

    return -1;
}
vector<int> asteroidCollision(vector<int> &nums)
{
    stack<int> st;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0 || st.empty())
        {
            st.push(nums[i]);
        }
        else
        {
            while (!st.empty() && check(st.top(), nums[i]) == 1)
            {
                st.pop();
            }
            if (!st.empty() && check(st.top(), nums[i]) == 0)
            {
                st.pop();
            }
            else if (st.empty() || st.top() < 0)
            {
                st.push(nums[i]);
            }
        }
    }
    int n = st.size();
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = st.top();
        st.pop();
    }

    return ans;
}
int main()
{

    return 0;
}