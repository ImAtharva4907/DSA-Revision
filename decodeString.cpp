#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

string decodeString(string s)
{
    stack<string> strStack;
    stack<int> numStack;
    string currStr = "";
    int num = 0;

    for (char c : s)
    {
        if (isdigit(c))
        {
            num = num * 10 + (c - '0'); // Handle multi-digit numbers
        }
        else if (c == '[')
        {
            numStack.push(num);
            strStack.push(currStr);
            num = 0;
            currStr = "";
        }
        else if (c == ']')
        {
            string temp = currStr;
            int repeatCount = numStack.top();
            numStack.pop();

            currStr = strStack.top();
            strStack.pop();

            while (repeatCount--)
            {
                currStr += temp;
            }
        }
        else
        {
            currStr += c;
        }
    }

    return currStr;
}
int main()
{
    string s = "3[a2[c]]";
    cout << decodeString(s) << endl;

    return 0;
}