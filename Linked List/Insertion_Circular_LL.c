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

int Insertion(struct Node * head , int index , int x){
    struct Node * t;
    struct Node * p = head;
    for(int i = 0 ; i<index-1 ; i++){
        p = p->next;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = p->next;
    p->next = t;
}

int Inser_At_First(struct Node * head , int y){
    struct Node * p = head;
    struct Node * t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = y;
    t->next = head;
    while(p->next != head){
        p = p->next;
    }
    p->next = t;
    head = t;
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
    printf("--------------------\n");

    Insertion(head,2,77);
    traversal(head);
    printf("--------------------\n");

    Inser_At_First(head,12);
    traversal(head);
}