#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *ptr){
    while(ptr!=NULL){
        printf("%d \n",ptr->data );
        ptr = ptr->next;
    }
}
int main(){
    
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = first;

    first -> data = 2;
    first -> next = second;

    second -> data = 3;
    second -> next = third;

    third -> data = 4;
    third -> next = NULL;

    traverse(head);



}