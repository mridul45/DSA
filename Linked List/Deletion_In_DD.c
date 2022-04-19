#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};

int display(struct Node * ptr){
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != NULL);
    
}

int deletion(struct Node * head , int index){
    int x;
    struct Node * p;
    p = head;
    for(int i = 0 ; i<index-1 ; i++){
        p = p->next;
    }
    p->prev->next = p->next;
    if(p->next != NULL){
        p->next->prev = p->prev;
    }
    x = p->data;
    free(p);
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

    head->prev = NULL;
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
    third->next = NULL;

    display(head);
    printf("-------------------\n");

    deletion(head,2);
    display(head);
}