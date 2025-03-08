#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

ListNode *deleteMiddle(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    else if (head->next->next == nullptr)
    {
        head->next->val = head->val;
        return head->next;
    }
    ListNode *res = head;
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->val = slow->next->val;
    slow->next = slow->next->next;

    return res;
}
int main()
{

    return 0;
}