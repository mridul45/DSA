#include<stdio.h>
#include<stdlib.h>

struct rectangle{
  int length;
  int breadth;
};

int main(){
  struct rectangle * r;
  r = (struct rectangle *)malloc(sizeof(struct rectangle));

  printf("Length is %d : ", r->length);
  printf("Breadth is %d : ", r->breadth);
  printf("\n");

  r->length = 45;
  r->breadth = 56;
  printf("\n");

  printf("Length is %d : ", r->length);
  printf("Breadth is %d : ", r->breadth);
  printf("\n");

  printf("Area is %d\n", r->length * r->breadth);
  printf("--------------------\n");
  // now
  struct rectangle q;
  q.length = 88;
  q.breadth = 90;

  printf("The new area is %d\n", q.length * q.breadth);
  return 0;
}
