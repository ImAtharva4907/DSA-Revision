#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

ListNode* reverseList(ListNode* head) {
    ListNode* nextNode,*prevPtr = nullptr;

    while(head)
    {
        nextNode = head->next;
        head->next = prevPtr;
        prevPtr = head;
        head = nextNode;
    }

    return prevPtr;
}
int main() {
    
    return 0;
}