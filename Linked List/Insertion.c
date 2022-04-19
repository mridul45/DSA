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

struct Node * insertion_at_first(struct Node * ptr , int data){
    struct Node * t = (struct Node *)malloc(sizeof(struct Node));
    t->next = ptr;
    t->data = data;
    ptr = t;
    return t;
}


int insertion(struct Node * ptr , int index , int data){
    struct Node * q = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = ptr;

    q->data = data;
    for(int i = 0 ; i<index-1 ; i++){
        ptr = ptr->next;
    }
    q->next = ptr->next;
    ptr->next = q;
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
    printf("--------------------\n");

    insertion_at_first(head,40);
    display(head);

    printf("---------------------\n");
    insertion(head,1,89);
    display(head);
}