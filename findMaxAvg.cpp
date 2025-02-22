#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    int n = nums.size();
    double res = INT_MIN;
    double sum = 0;
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        sum += nums[j];

        if (j - i + 1 == k)
        {
            double val = sum / k;
            res = max(res, val);
            sum -= nums[i];
            i++;
        }
    }

    return res;
}

int main()
{

    return 0;
}