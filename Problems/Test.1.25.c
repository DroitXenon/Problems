#include<stdio.h>

int foo(int x) {
    printf("foo called\n");
    if (x < 0) {
      return x;
    } else {
     return -x;
    }
  }

int main(void) {
   const int c = 3;
  printf("foo(%d) = %d", c, foo(c));  
  }