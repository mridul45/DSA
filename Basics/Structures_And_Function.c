#include<stdio.h>
#include<stdlib.h>

struct rectangle{
  int length;
  int breadth;
};

void initialise(struct rectangle * r , int l , int b){
  r->length = l;
  r->breadth = b;
}

int area(struct rectangle r){
  return r.length * r.breadth;
}

void changeLength(struct rectangle * r , int l){
  r->length = l;
}

int main(){
  struct rectangle r;
  int f;
  initialise(&r,10,2);
  f = area(r);
  printf("%d\n", f);
  return 0;
}
