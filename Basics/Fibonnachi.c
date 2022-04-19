
// iterative version fibonnachi series
#include<stdio.h>

/*  int fib(int n){
  int u = 0 , t = 1 , s = 0 , i;
  if(n<=1){
    return n;
  }
  else{
    for(i = 2 ; i<=n ; i++){
      s = u + t;
      u = t;
      t = s;
    }
  }
  return s;
}

int main(){
  printf("%d\n", fib(5));

  return 0;
} */

// Now a recurssive function which consumes O(2^n)

/*  int fib(int n){
  if(n<=1){
    return n;
  }
  else{
    return fib(n-2) + fib(n-1);
  }
}

int main(){
  printf("%d\n", fib(5));

  return 0;
}  */


// Now memorisation meathod for the above function

/* this is a more efficient way to code the above programe
     as the time complexity is O(n) */


int F[30]; // difining a global variable
int fib(int n){
  if(n<=1){
    F[n] = n;
    return n;
  }
  else{
    if(F[n-2] == -1){
      F[n-2] = fib(n-2);
    }
     if(F[n-1] == -1){
      F[n-1] = fib(n-1);
    }
  }
  return F[n-2]+F[n-1];
}

int main(){
  int i;
  for(i = 0 ; i<30 ; i++){
    F[i] = -1;
  }
  printf("%d\n", fib(10));

  return 0;
}
