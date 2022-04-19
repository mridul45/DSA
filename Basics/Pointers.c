#include<stdio.h>
#include<stdlib.h>

int main(){
  int a = 10;
  int * p; // here we have declared the pointer
  p = &a; // p contains the adress of a

  printf("%d\n", a);
  printf("%d\n", p);
  printf("%d\n", (*p)); // Dereferencing --> Gives the value of a at that adress
  printf("%d\n", &a);

   // Pointer to an array

   printf("----------------------\n");

   int A[] = {4,5,6,8,9,7};
   int * q;
   q = A; // no need to write & here or write &A[0]
   for(int i = 0 ; i<6 ; i++){
     printf("%d\n", q[i]);
   }

   // creating an array in heap using pointers

   printf("----------------------\n");
   int * s;
   s = (int *)malloc(5 * sizeof(int)); // Allocates the memory in heap
   s[0] = 45;
   s[1] = 35;
   s[2] = 41;
   s[3] = 25;
   s[4] = 78;

   for(int i = 0; i<5 ; i++){
     printf("%d\n", s[i]);
   }
   free(s);
  return 0;
}

// every Pointer takes the same size of memory irrespective of their data type
