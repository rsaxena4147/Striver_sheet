#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Definition for singly-linked list.
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
public:
  ListNode *rev(ListNode *head)
  {
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *forward = NULL;

    while (curr != NULL)
    {

      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
    };
    return prev;
  }
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {

    ListNode *ansList = new ListNode(0);
    ListNode *ans = ansList;

    ListNode *f = l1;
    ListNode *s = l2;

    int carry = 0;

    while (f != NULL && s != NULL)
    {
      int a = f->val;
      int b = s->val;
      int sum = a + b + carry;

      ListNode *node = new ListNode(sum % 10);
      carry = sum / 10;

      ans->next = node;
      ans = ans->next;
      f = f->next;
      s = s->next;
    }

    while (f != NULL)
    {
      int a = f->val + carry;

      ListNode *node = new ListNode(a % 10);
      carry = a / 10;
      ans->next = node;
      ans = ans->next;
      f = f->next;
    }

    while (s != NULL)
    {
      int a = s->val + carry;

      ListNode *node = new ListNode(a % 10);
      carry = a / 10;
      ans->next = node;
      ans = ans->next;
      s = s->next;
    }
    if (carry > 0)
    {
      ListNode *node = new ListNode(carry);
      ans->next = node;
      ans = ans->next;
    }

    return (ansList->next);
  }

};