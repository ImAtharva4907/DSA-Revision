#include <iostream>
#include <bits/stdc++.h>
#include "C:\Users\ASUS\Documents\New folder (2)\Dsa Sheet\mylibrary.h"
using namespace mylib;
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
private:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *nextListNode, *prevListNode = NULL;
        while (head)
        {
            nextListNode = head->next;
            head->next = prevListNode;
            prevListNode = head;
            head = nextListNode;
        }
        return prevListNode;
    }
    ListNode *findMiddle(ListNode *head)
    {

        if (head == nullptr && head->next == nullptr)
        {
            return head;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

public:
    int pairSum(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *temp2 = findMiddle(temp);
        ListNode *mid = reverseList(temp2->next);
        temp2->next = mid;
        int res = 0;

        while (mid)
        {
            res = max(res, temp->val + mid->val);
            temp = temp->next;
            mid = mid->next;
        }

        return res;
    }
};
int main()
{

    return 0;
}