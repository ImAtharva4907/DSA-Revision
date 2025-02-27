#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> st1(nums1.begin(), nums1.end());
    unordered_set<int> st2(nums2.begin(), nums2.end());

    vector<vector<int>> ans(2);

    for (int num : st1) {
        if (st2.find(num) == st2.end()) ans[0].push_back(num);
    }
    for (int num : st2) {
        if (st1.find(num) == st1.end()) ans[1].push_back(num);
    }

    return ans;
}
int main() {
    
    return 0;
}