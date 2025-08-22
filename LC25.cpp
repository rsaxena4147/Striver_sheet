#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseK(ListNode*& head, int k) {

        if (head == NULL) {
            return NULL;
        }

        int c = 0;
        ListNode* temp = head;

        while (temp != nullptr && c < k) {
            temp = temp->next;
            c++;
        }

        if (c < k) {
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fow = NULL;
        int count = 0;

        while (curr != NULL && k > count) {
            fow = curr->next;
            curr->next = prev;
            prev = curr;

            curr=fow;
            count++;

        }
        if(fow != NULL){
            head -> next = reverseK(fow , k);
        }


        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseK(head , k);
    }
};