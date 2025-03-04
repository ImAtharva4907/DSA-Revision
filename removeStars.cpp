#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

string removeStars(string s)
{

    int n = s.length();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            if (j > 0)
                j--;
        }
        else
        {
            s[j] = s[i];
            j++;
        }
    }

    return s.substr(0, j);
}
int main()
{

    return 0;
}