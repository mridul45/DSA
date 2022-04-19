#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};

int display(struct Node * head){
    struct Node * p;
    p = head;
    do
    {
        printf("%d\n", p->data);
        p = p->next;

    } while (p != head);
    
}

int main(){
    struct Node * prev;
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * next;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->prev = third;
    head->data = 10;
    head->next = first;

    first->prev = head;
    first->data = 20;
    first->next = second;

    second->prev = first;
    second->data = 30;
    second->next = third;

    third->prev = second;
    third->data = 40;
    third->next = head;

    display(head);
}