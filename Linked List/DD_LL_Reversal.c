#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node * prev;
    int data;
    struct Node * next;
};

int display(struct Node * ptr){
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
        
    } while (ptr != NULL);
    
}

int reversal(struct Node * head){
  
    struct Node * p;
    p=head;
     while(p->next!=NULL)
     p=p->next;

     while(p->prev!=NULL)
     {
         printf("%d\t",p->data);
         p=p->prev;
     }
  printf("%d",p->data);
  
  // here when the pointer reaches the end it is made to 
    // traverse again in the backward direction
    
}

int main(){
    struct Node * prev;
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * next;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 10;
    head->next = first;

    first->prev = head;
    first->data = 20;
    first->next = second;

    second->prev = first;
    second->data = 30;
    second->next = third;

    third->prev = second;
    third->data = 40;
    third->next = NULL;

    display(head);
    printf("\n-------------------\n");

    reversal(head);
 
}