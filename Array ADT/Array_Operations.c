#include<stdio.h>
#include<stdlib.h>

struct Array{
  int A[10];
  int size;
  int length;
};

void display(struct Array arr){
  for(int i = 0 ; i<arr.length ; i++){
    printf("%d\n", arr.A[i]);
  }
}

int getIndex(struct Array arr , int index){
  if(index>=0 && index<arr.length){
    return arr.A[index];
  }
}

int setIndex(struct Array * arr , int index , int element){
  if(index>=0 && index<arr->length){
    arr->A[index] = element;
  }
}

int maximum(struct Array arr){
  int max = arr.A[0];
  for(int i = 0 ; i<arr.length ; i++){
    if(arr.A[i]>max){
      max = arr.A[i];
    }
  }
}

int sum(struct Array arr){
  int summation = 0;
  for(int i = 0 ; i<arr.length ; i++){
    summation = summation + arr.A[i];
  }
  return summation;
}

float average(struct Array arr){
  return (float)sum(arr)/arr.length;
}

int main(){
  struct Array arr = {{1,2,3,4,5,6,7,8,9,10},10,10};

  display(arr);
  printf("------------------------\n");
  printf("%d\n",getIndex(arr,3));
  printf("-----------------------\n");

  setIndex(&arr,4,6);
  display(arr);

  printf("----------------------\n");

  printf("%d\n",maximum(arr));

  printf("------------------------\n");

  printf("%d\n", sum(arr));

  printf("-----------------------\n");

  printf("%d\n", average(arr));
  return 0;
}
