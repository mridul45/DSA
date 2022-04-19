#include<stdio.h>
#include<stdlib.h>

struct Array{
  int * A; // creating an array of desired size in heap
  int size;
  int length;
};

void display(struct Array arr){
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

int main(){
  struct Array arr;
  int i , n;
  printf("Enter the size you wish to create\n");
  scanf("%d", &arr.size);

  // now allocating the memory for the array for the size
  // we entered above
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;
  // we created an array by allocating the momory in heap
  printf("Enter the numbers to be traversed\n");
  scanf("%d", &n);

  printf("Enter all elements\n");
  for(i = 0 ; i<n ; i++){
    scanf("%d", &arr.A[i]);
    arr.length = n;
  }
  printf("---------------------\n");
  printf("The traversed array is\n");
  display(arr);

  free(arr.A);
  return 0;
}
