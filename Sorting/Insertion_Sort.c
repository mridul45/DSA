#include<stdio.h>
#include<stdlib.h>

void Insertion_Sort(int A[],int n){
    int i,j,x;
    for(i = 1 ; i<n ; i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main(){
    int A[] = {11,13,7,9,5,2,4};
    int n = 7;
    Insertion_Sort(A,n);

    for(int i = 0 ; i<7 ; i++){
        printf("%d ", A[i]);
    }
    return 0;
}