#include <bits/stdc++.h>
#include <iostream>
using namespace std;


//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(head == NULL) return 0;

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast -> next != NULL) {

            if (slow->next == fast->next)
                return true;

            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};
