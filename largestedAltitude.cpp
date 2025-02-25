#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;
int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int alt = 0;
    int res = 0;

    for(int i=0; i<n; i++)
    {
        alt+=gain[i];
        res = max(res,alt);
    }
    return res;
}
int main() {
    
    return 0;
}