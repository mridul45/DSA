#include<stdio.h>
#include<stdlib.h>

// void function(int A[] , int n){
//   int i;
//   for(i = 0 ; i<n ; i++){
//     printf("%d\n", A[i]);
//   }
// }
//
// int main(){
//   int A[5] = {1,2,3,4,5};
//   function(A , 5);
// }

int * fun(int size){
  int * p;
  p = (int *)malloc(size*sizeof(int));
  for(int i = 0 ; i<size ; i++){
    p[i] = p[i+1];

    return (p);
  }
}

int main(){
  int * ptr;
  int size = 5;
  ptr = fun(size);
  for(int i = 0 ; i<size ; i++){
    printf("%d\n", ptr[i]);
  }

  return 0;
}
