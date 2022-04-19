#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int traversal(struct Node * ptr){
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int sorted(struct Node * ptr){
    int x = -65563;
    while(ptr != NULL){
        if(ptr->data<x){
            return 0;
        }
        else{
            x = ptr->data;
            ptr = ptr->next;
        }
    }
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

    head->data = 45;
    head->next = first;

    first->data = 50;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 60;
    third->next = NULL;

    printf("%d\n", sorted(head));
    return 0;
}