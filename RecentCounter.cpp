#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
class RecentCounter
{
public:
    queue<int> q;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        q.push(t);
        while (!q.empty() && q.front() < (t - 3000))
        {
            q.pop();
        }
        return q.size();
    }
};

int main()
{

    return 0;
}