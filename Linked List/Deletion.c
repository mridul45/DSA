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

struct Node * deletion(struct Node * ptr , int index){
    int x;
    struct Node * p = ptr;
    struct Node * q = NULL;

    for(int i = 0 ; i<index-1 ; i++){
        q = p;
        p = p->next;
    }
    q->next = p->next;
    x = p->data;
    free(x);
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

    deletion(head,2);
    display(head);
}