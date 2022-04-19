#include<stdio.h>
struct Rectangle
{
  int l;
  int b;
}r; // Another way of declaring a structure

// Also note the structure can be declared outside the main meathod/function
// struct Rectangle r; ---> like this . This is global declaration

int main(){
  // struct Rectangle r;

  r.l = 56;  // initialisation of length --> Assigning the values
  r.b = 100; // initialisation of breadth --> Assigning the values

  printf("The area is %d\n", r.l*r.b);
  printf("%d\n", sizeof(r));

  printf("%d\n", r.l); // accessing values
  return 0;
}

// the total 8 bytes are consumed for this structure as int consumes 4 bytes

/* for char it will access 4 bytes but only consume 1 bytes
      because accessing 4 byte is easier and this adjusting of memory in a
      structure is called padding */
