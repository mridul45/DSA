#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int display(struct Node * ptr){
    do{
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr != ptr);
}

int isLoop(struct Node * ptr){
    struct Node * p;
    struct Node * q;
    p = q = ptr;
    do{
        p = p->next;
        q = q->next;
        if(q != NULL){
            q = q->next;
        }
        else{
            q->next = NULL;
        }
        while(p && q);
        if(p == NULL){
        printf("True\n");
    }
        else{
            printf("False\n");
        }
    }
}
int main(){
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * t;
    struct Node * s;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 56;
    head->next = first;

    first->data = 60;
    first->next = second;

    second->data = 71;
    second->next = third;

    third->data = 96;
    third->next = fourth;

    fourth->data = 100;
    fourth->next = first;

    t = head->next->next;
    s = head->next->next->next->next;

    display(head);
}