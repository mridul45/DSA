#include<stdio.h>
#include<stdlib.h>

struct Array{
  int A[10];
  int size;
  int length;
};

void traversal(struct Array arr){
  printf("The Elements of the Array\n");
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

int insertion(struct Array * arr , int index , int x){
  if(index>=0 && index<=arr->length){
    for(int i = arr->length ; i>index ; i--){
      arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
  }
}

int Append(struct Array * arr , int y){
  if(arr->length<arr->size){
    arr->A[arr->length] = y;
    arr->length++;
  }
}

int main(){
  struct Array arr = {{4,5,6,7,2},10,5};

  traversal(arr);

  printf("-----------------------\n");

  insertion(&arr,2,45);
  traversal(arr);

  printf("-----------------------\n");

  Append(&arr , 22);
  traversal(arr);
  return 0;
}
