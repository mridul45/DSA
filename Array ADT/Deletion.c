#include<stdio.h>
#include<stdlib.h>

struct Array{
  int A[10];
  int size;
  int length;
};

void traversal(struct Array arr){
  printf("The Array is\n");
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

int Deletion(struct Array * arr , int index){
  if(index>=0 && index<=arr->length){
    for(int i = index ; i<arr->length-1 ; i++){
      arr->A[i] = arr->A[i+1];
    }
    arr->length--;
  }
}

int main(){
  struct Array arr = {{1,4,8,9,7},10,5};
  traversal(arr);

  printf("------------------\n");

  Deletion(&arr,2);
  traversal(arr);

  return 0;
}
