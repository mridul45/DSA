#include<stdio.h>

// int fun(int n){
//   if(n>0){
//     return fun(n-1) + n;
//   }
//   return 0;
// }
//
// int main(){
//   int a = 5;
//   printf("%d\n", fun(a));
//
//   return 0;
// }


int fun(int z){
  static int x = 0;
  if(z>0){
    x++;
    return fun(z-1) + x;
  }
  return 0;
}

int main(){
  int a = 5;
  printf("%d\n", fun(a));

  return 0;
}
