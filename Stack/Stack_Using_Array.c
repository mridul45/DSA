#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * s;
};

int push(struct stack * st , int x){
    if(st->top == st->size-1){
        printf("Full\n");
    }
    else{
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack * st){
    int x = -1;
    if(st->top == -1){
        printf("Stack Empty\n");
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
}

int isFull(struct stack * st){
    if(st->top == st->size-1){
        printf("Stack Overflow!!");
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack * st){
    if(st->top == -1){
        printf("Stack Underflow!!");
    }
    else{
        return 0;
    }
}

int peek(struct stack * st , int i){
    if(st->top-i+1<0){
        printf("Invalid");
    }
    else{
        printf("%d\n", st->s[st->top-i+1]);
    }
}

int main(){
    struct stack * st;
    st->size = 10;
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));


    push(st,10);
    push(st,20);
    push(st,30);
    push(st,40);

    peek(st,2);
    return 0;
}