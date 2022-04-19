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

int isSorted(struct Array arr , int size){
  for(int i = 0 ; i<size-1 ; i++){
    if(arr.A[i]>arr.A[i+1]){
      return 0;
    }
    else{
      return 1;
    }
  }
}

int main(){
  struct Array arr = {{1,2,3,4,5,6,7,10},10,8};
  int size = 8;
  display(arr);
  printf("---------------------\n");

  printf("%d\n",isSorted(arr,size));

  return 0;
}
