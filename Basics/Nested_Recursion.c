#include<stdio.h>

int fun(int n){
  if(n>100){
    return n-10;
  }
  else{
    return fun(fun(n+11));  // the parameter passed is a recursive call
  }
}

int main(){
  printf("%d\n", fun(95));

  return 0;
}
