#include<stdio.h>
int main(){
  int A[] = {1,2,6,4}; // declaration and initialisation

  for(int i = 0 ; i<4 ; i++){
    printf("%d " , A[i]);
  }
  printf("\n");
  printf("%d\n", A[1]);
  printf("%d\n", sizeof(A)); // size is 16 bytes as one int is of 4 bytes


  return 0;
}
