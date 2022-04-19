#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};

int traversal(struct Node * ptr){
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != NULL);
    
}

int main(){
    struct Node * prev;
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * next;

    prev = (struct Node *)malloc(sizeof(struct Node));
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    next = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 10;
    head->next = first;

    first->prev = head;
    first->data = 20;
    first->next = second;

    second->prev = first;
    second->data = 30;
    second->next = NULL;

    traversal(head);
}