// using the formula
#include<stdio.h>

// int sum(int n){
//   return (n*(n-1))/2;
// }
//
// int main(){
//   printf("%d\n", sum(5));
//
//   return 0;
// }
int sum(int n){
  if(n == 0){
    return 0;
  }
  else{
    return sum(n-1) + n;
  }
}

int main(){
  printf("%d\n", sum(5));

  return 0;
}
