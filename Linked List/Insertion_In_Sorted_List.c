#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int display(struct Node * ptr){
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertion(struct Node * ptr , int x){
    struct Node * p = ptr;
    struct Node * q = NULL;
    while(p && p->data<x){
        q = p;
        p = p->next;
    }
    struct Node * t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = q->next;
    q->next = t;
}

int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 56;
    head->next = first;

    first->data = 60;
    first->next = second;

    second->data = 65;
    second->next = third;

    third->data = 85;
    third->next = NULL;

    display(head);
    printf("---------------------\n");

    insertion(head,67);
    display(head);
}