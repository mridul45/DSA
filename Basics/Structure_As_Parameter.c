#include<stdio.h>
#include<stdlib.h>

// struct rectangle{
//   int length;
//   int breadth;
// };
//
// void func(struct rectangle r){
//   r.length = 20;
//   printf("The length is : %d ", r.length);
//   printf("\n");
//   printf("The breadth is : %d", r.breadth);
// }
//
// int main(){
//   struct rectangle r;
//   r.length = 10;
//   r.breadth = 5;
//   // printf("Length is %d\n", r.length);
//   // printf("Breadth is %d\n", r.breadth);
//   // making a function for printing length and breadth
//     printf("The length is : %d ", r.length);
//     printf("\n");
//     printf("The breadth is : %d", r.breadth);
//       printf("\n");
//       printf("----------------------\n");
//   func(r);
// }
// the above code is for call by value

struct rectangle{
  int l;
  int b;
};

void func(struct rectangle * p){
  p->l = 45;
  p->b = 10;
  printf("The length is : %d ", p->l);
  printf("\n");
  printf("The breadth is : %d", p->b);
}

int main(){
  struct rectangle r;
  r.l = 10;
    // printf("Length is %d\n", r.l);
    // printf("Breadth is %d\n", r.breadth);
    // making a function for printing length and breadth

    func(&r);

}
