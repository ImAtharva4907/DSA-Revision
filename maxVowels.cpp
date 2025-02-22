#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

bool isVowel(char &c)
{

    return (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u');
}
int maxVowels(string s, int k)
{
    int n = s.length();
    int i = 0;
    int res = -1;
    int cnt = 0;

    for (int j = 0; j < n; j++)
    {
        if (j - i + 1 > k)
        {
            if (isVowel(s[i]))
                cnt--;
            i++;
        }

        if (isVowel(s[j]))
            cnt++;

        res = max(res, cnt);
    }

    return res;
}
int main()
{

    string s = "leetcode";
    int k = 3;
    cout << maxVowels(s, k) << endl;

    return 0;
}