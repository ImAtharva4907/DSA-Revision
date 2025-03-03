#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

bool closeStrings(string word1, string word2)
{
    vector<int> mp1(26, 0), mp2(26, 0);

    for (char &c : word1)
    {
        mp1[c - 'a']++;
    }
    for (char &c : word2)
    {
        mp2[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if ((mp1[i] == 0 && mp2[i] != 0) || (mp1[i] != 0 && mp2[i] == 0))
        {
            return false;
        }
    }

    sort(mp1.begin(), mp1.end());
    sort(mp2.begin(), mp2.end());

    return mp1 == mp2;
}
int main()
{

    return 0;
}