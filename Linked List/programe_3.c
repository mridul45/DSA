#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int traversal(struct Node * ptr){
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int count(struct Node * ptr){
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

void delete(struct Node * ptr, int index){
    struct Node * q;
    int x = -1;

    if(index<1 || index>count(ptr)){
        return -1;
    }
    else{
        for(int i = 0 ; i<index-1 ; i++){
            q=ptr;
            ptr = ptr->next;
        }
        q->next = ptr->next;
        x = ptr->data;
        free(ptr);
        return x;
    }
}

int isSorted(struct Node * ptr){
    int x = -66589;
    while(ptr != NULL){
        if(ptr->data<x){
            return 0;
        }
        else{
            x = ptr->data;
            ptr = ptr->next;
        }
    }
    return 1;
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

    head->data = 12;
    head->next = first;

    first->data = 16;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    delete(head,2);
    traversal(head);

    printf("%d\n", isSorted(head));
    return 0;
}