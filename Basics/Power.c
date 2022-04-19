#include<stdio.h>


// int power(int m , int n){
//   if(n == 0){
//     return 1;
//   }
//   else{
//     return power(m,n-1)*m;
//   }
// }
//
// int main(){
//   printf("%d\n", power(2,8));
//   printf("------------------------\n");
//
//   return 0;
// }

// second meathod with lesser number of calls

int power1(int m , int n){
  if(n == 0){
    return 1;
  }
  else{
    if(n%2==0){
      return power1(m*m,n/2);
    }
    else{
      return m*power1(m*m,(n-1)/2);
    }
  }
}

int main(){
  printf("%d\n", power1(2,9));

  return 0;
}
// the above meathod is more efficient
