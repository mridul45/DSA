#include<stdio.h>
#include<stdlib.h>

struct Array{
  int A[15];
  int size;
  int length;
};

void traversal(struct Array arr){
  printf("------------- The Elements are --------------\n");
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

void swap(int * x , int * y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
// int linear_search(struct Array arr , int key){
//   for(int i = 0 ; i<arr.length ; i++){
//     if(key == arr.A[i]){
//       return i;
//     }
//   }
//   return -1;
// }

// Transposition Meathod
int linear_search(struct Array * arr , int key){
  for(int i = 0 ; i<arr->length ; i++){
    if(key == arr->A[i]){
      swap(&arr->A[i],&arr->A[i-1]);
      return i;
    }
  }
  return -1;
}

int main(){
  struct Array arr = {{4,5,6,7,8,9},15,6};
  printf("%d", linear_search(&arr,9));
  traversal(arr); // Note here the order will change //
  
  return 0;
}
