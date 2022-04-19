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

int count(struct Node * ptr){
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

int sum(struct Node * ptr){
    int sum = 0;
    while(ptr != NULL){
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}

int max_element(struct Node * ptr){
    int max = 0;
    while(ptr != NULL){
        if(ptr->data>max){
            max = ptr->data;
        ptr = ptr->next;
        }
    }
    return max;
}

struct Node * linear_search(struct Node * ptr,int key){
    while(ptr != NULL){
        if (key == ptr->data){
            return ptr;

        ptr = ptr->next;
    }
        return 0;
    }
}

int insertion(struct Node * ptr , int index , int value){
    struct Node * t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    
    if(index == 0 || index > count(ptr)){
        printf("The given index is not valid !");
    }
    else if(index == 0){
        t->next = ptr;
        ptr = t;
    }
    else{
        for(int i = 0 ; i<index ; i++){
            ptr = ptr->next;
        }
        t->next = ptr->next;
        ptr->next = t;
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

    head->data = 40;
    head->next = first;

    first->data = 45;
    first->next = second;

    second->data = 50;
    second->next = third;

    third->data = 55;
    third->next = NULL;

    printf("%d\n", count(head));
    printf("%d\n", sum(head));
    printf("%d\n", max_element(head));
    
    insertion(head,2,88);
    display(head);
}