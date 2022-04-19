#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

int traversal(struct Node * head){
    struct Node * ptr = head;
    
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    
}

struct Node * deletion(struct Node * head , int index){
    int x;
    struct Node * p = head;
    struct Node * q;
    for(int i = 0 ; i<index-2 ; i++){
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
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

    second->data = 70;
    second->next = third;

    third->data = 80;
    third->next = head;

    traversal(head);
    printf("-----------------------\n");

    deletion(head,2);
}