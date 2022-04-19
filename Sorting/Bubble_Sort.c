#include<stdio.h>
#include<stdlib.h>

void swap(int * x , int * y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble_Sort(int A[] , int n){
    int flag;
    for(int i = 0 ; i<n-1 ; i++){
        flag = 0;
        for(int j = 0 ; j<n-1 ; j++){
            if(A[i]>A[j]){
                swap(&A[i],&A[j]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){
    int A[] = {7,1,3,10,9,4,5,6};
    int n = 10;

    Bubble_Sort(A,n);

    for(int i = 0 ; i<8 ; i++){
        printf("%d ", A[i]);
    }
    return 0;
}