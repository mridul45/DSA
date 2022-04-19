#include<stdio.h>

void fun(int n){
  if(n>0){
    fun(n-1);  // head recursion
    printf("%d\n", n);
  }

}

// Creating another recursion //
void fun2(int c){
  if(c>0){
    printf("%d\n", c);  // tail recursion
    fun2(c-1);
  }
}

int main(){
  int x;
  x = 5;
  fun(x);

  printf("------------------------\n");

  int y = 7;
  fun2(y);  // The output has been reversed
  return 0;
}

/* Note in the above meathod the function is first called and then
    printed hense we get the output straight not reversed. But if we print and
    then call the function the output will be reversed */
