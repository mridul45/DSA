#include<stdio.h>

int add(int a , int b){ // prototype or signature of a function
  int c;
  c = a+b;  // Function definition
  return c;
}

int main(){
  int  z;
  z = add(10,20);  // Actual parameters and is called calling
  printf("The sum is: %d", z); // of the function....
  return 0;
}
