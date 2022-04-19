#include<stdio.h>
#include<stdlib.h>

struct Array{
   int A[10];
   int size;
   int length;
};

int display(struct Array arr){
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

int reversal(struct Array * arr){
  int * B;
  int i , j;
  B = (int *)malloc(arr->length * sizeof(int));
  for(i = arr->length-1,j = 0 ; i>=0 ; i--,j++){
    B[j] = arr->A[i];
  }
  for(i = 0 ; i<arr->length ; i++){
    arr->A[i] = B[i];
  }
}

int reversal_by_swapping(struct Array * arr){
  int i , j , temp;
  for(int i = 0,j=arr->length-1; i<j ; i++,j--){
    temp = arr->A[i];
    arr->A[i] = arr->A[j];
    arr->A[j] = temp;
  }
}

int main(){
  struct Array arr = {{1,5,4,6,9,8},10,6};

  display(arr);
  printf("--------------------\n");

  reversal(&arr);
  display(arr);
  printf("----------------------\n");

  reversal_by_swapping(&arr);
  display(arr);
  return 0;
}
