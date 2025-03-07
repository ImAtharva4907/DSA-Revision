#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

string predictPartyVictory(string s)
{
    int n = s.length();
    queue<int> r, d;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r.push(i);
        }
        else
        {
            d.push(i);
        }
    }

    while (!r.empty() && !d.empty())
    {
        int rInd = r.front();
        int dInd = d.front();
        r.pop();
        d.pop();

        if (rInd < dInd)
        {
            r.push(rInd + n);
        }
        else
        {
            d.push(dInd + n);
        }
    }

    return (r.empty()) ? "Dire" : "Radiant";
}
int main()
{
    string s = "DRRDRDRDRDDRDRDR";
    cout << predictPartyVictory(s);

    return 0;
}