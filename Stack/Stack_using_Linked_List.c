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

int isEmpty(struct Node * top){
    if(top == NULL){
        printf("Stack is Empty!!");
    }
    else{
        return 1;
    }
}

int isFull(struct Node * top){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL){
        printf("Stack is Full!!");
    }
    else{
        return 1;
    }
}

int push(struct Node * top , int x){
    if(isFull(top)){
        printf("Stack Overflow!!");
    }
    else{
        struct Node * n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node ** top){
    if(isEmpty(top)){
        printf("Stack Underflow!!");
    }
    else{
        struct Node * n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main(){
    struct Node * top = NULL;

    push(top,12);
    push(top,10);

    printf("%d\n",pop(&top));
}