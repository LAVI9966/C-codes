#include,bits/stdc++.h>
using namespace
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* findmid(Node* head){
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    Node* merge(Node* first , Node* second){
        if( first == NULL){
            return second;
        }
        
        if( second == NULL){
            return first;
        }
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        while(first != NULL && second != NULL){
            if(first -> data < second -> data){
                temp -> next = first;
                temp = first;
                first = first -> next;
            }else{
                temp -> next = second;
                temp = second;
                second = second -> next;                
            }
        }
        while(first != NULL){
                temp -> next = first;
                temp = first;
                first = first -> next;            
        }
        while(second != NULL){
                temp -> next = second;
                temp = second;
                second = second -> next;            
        }
        ans = ans -> next ;
        return ans;
    }
    
    Node* mergeSort(Node* head) {
        if(  head == NULL || head -> next == NULL){
            return head;
        }
        Node* mid = findmid(head);
        
        Node* first = head;
        Node* second = mid -> next;
        mid -> next = NULL;
         
        first = mergeSort(first);
        second = mergeSort(second);
        
        Node* result = merge(first , second);
        
        return result;
        // your code here
    }
};
