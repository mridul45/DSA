// creating arrays completely inside stack memory

#include<stdio.h>

int main(){
  int A[3][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

  // traversing
  for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<4 ; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("----------------------\n");
  // now creating 2-D array partially in stack and partially in heap

  int * B[3]; // Array of integer pointers
  
  B[0] = (int *)malloc(4 * sizeof(int));
  B[1] = (int *)malloc(4 * sizeof(int));
  B[2] = (int *)malloc(4 * sizeof(int));

  // Asign the values here

  for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<4 ; j++){
      printf("%d ", B[i][j]); // gives garbage values
    }
    printf("\n");
  }
  free(B);

  printf("-----------------------\n");

  // Creating completely in heap

  int ** C;
  C = (int *)malloc(3 * sizeof(int));

  // now
  C[0] = (int *)malloc(4 * sizeof(int));
  C[1] = (int *)malloc(4 * sizeof(int));
  C[2] = (int *)malloc(4 * sizeof(int));

  for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<4 ; j++){
      printf("%d ", C[i][j]); // gives garbage values
    }
    printf("\n");
    free(C);
  }
  return 0;
}
