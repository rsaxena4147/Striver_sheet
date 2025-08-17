#include <bits/stdc++.h>
#include <iostream>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        n++;


        while(n--){
            fast=fast->next;
           
        }

        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        slow -> next = slow ->next->next;

        return dummy -> next;
        
    }
};