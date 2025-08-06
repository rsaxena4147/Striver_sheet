#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void insertion(Node* &head,Node* &tail,int data){
         Node* node = new Node(data);
        if(tail == NULL)
        {
            head = node;
            tail = node;
        }
        else{
            tail -> next = node;
            tail = node;
            
        }
    }
public:
    Node* copyRandomList(Node* head) {

        Node* clonehead = NULL;
        Node* clonetail = NULL;

        Node* temp = head;

        while(temp != NULL){
            insertion(clonehead, clonetail, temp -> val);
            temp = temp -> next;

        }

        map<Node* , Node*> oldTonew;
        Node* Original = head;
        Node* Fake = clonehead;
        while(Original != NULL){
            oldTonew[Original] = Fake;
            Original = Original -> next;
            Fake = Fake -> next;

        }
        
        Original = head;
        Fake = clonehead;

        while(Original != NULL){

            Fake -> random = oldTonew[Original -> random];
            Original = Original -> next;
            Fake = Fake -> next;


        }

     return clonehead;
        
    }
};