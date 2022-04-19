#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int traversal(struct Node * head){
    struct Node * ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * reverse(struct Node * head , int k){
    struct Node * r = NULL;
    struct Node * ptr = head;
    struct Node * next;

    int count = 0;

    while(ptr != NULL && count < k){
        next = ptr->next;
        ptr->next = r;
        r = ptr;
        ptr = next;
        count++;
    }
    if(next != NULL){
        head->next = reverse(next,k);
    }

    return r;
}

int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    struct Node * sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 45;
    head->next = first;

    first->data = 50;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 60;
    third->next = fourth;

    fourth->data = 65;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = sixth;

    sixth->data = 78;
    sixth->next = NULL;

    int k = 2;
    struct Node * newhead = reverse(head,k);
    traversal(newhead);
    return 0;
}