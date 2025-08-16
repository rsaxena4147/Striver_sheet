#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* solve (ListNode* first, ListNode* second){
        ListNode* curr1 = first;
        ListNode* curr2 = second;
       // ListNode* next1 = curr1 -> next;
     //ListNode* next2 = curr2 -> next;

        while(curr1-> next  != NULL && curr2 != NULL){
            if((curr1 -> val <= curr2 -> val) && (curr1 -> next  -> val >= curr2 -> val) ){
               
               ListNode* temp = curr2 -> next;
               curr2 -> next = curr1 -> next;
               curr1 -> next = curr2;
              
               curr1 = curr2;
               curr2 = temp;

               
            }
            else{
                curr1 = curr1 -> next;
               
            }

        }
            
            if(curr1 -> next == NULL){
                curr1 -> next = curr2;
                return first;
            }
              if (curr2 != NULL) {
            curr1->next = curr2;
        }

            
        


        
          return first;

    }
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {

        if(List1 == NULL) return List2;
        if(List2 == NULL) return List1;

        if(List1 -> val  <= List2 -> val){
           return solve(List1,List2 );
        }
        else{
            return  solve(List2,List1 );
        }

     
    }
};