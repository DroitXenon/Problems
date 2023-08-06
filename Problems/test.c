/////////////////////////////////////////////////////////////////////////////////////////
// INTEGRITY STATEMENT (v4)
//
// By signing your name and ID below you are stating that you have agreed
// to the online academic integrity statement posted on edX:
// (Course > Assignments > Assignment Information & Policies > Academic Integrity Policy)
/////////////////////////////////////////////////////////////////////////////////////////
// I received help from and/or collaborated with:

// ERROR_NO_INTEGRITY_STATEMENT
//
// Name: ERROR_NO_NAME
// login ID: ERROR_NO_LOGIN
//////////////////////////////////////////////////////////////////////////////////////////

#include "cs136.h"

// 
void draw_box(int width, int height, char c) {
  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      printf("%c",c);
    }
    printf("\n");
  }
}


void draw_fancy_box(int n) {
  int i = 0;
  int j = 0;
  for (i = 1; i <= n; i++) {
    if (i == 1) {
      if (n >= 2) {
      printf("+");
      for (j = 2; j <= 2 * n - 1; j++) {
        printf("-");
        }
      printf("+");
} else {
      printf("|");
      for ( j = 1; j <= n - i; j++) {
        printf(" ");
      }
      printf("/");
      for ( j = 1; j <= 2 * i - 4; j++) {
        printf(" ");
      }
      printf("\\");
      for ( j = 1; j <= n - i; j++) {
        printf(" ");
      }
      printf("|");
    }
    printf("\n");
  }
  
  for (i = n; i >= 1; i--) {
    if (i == 1) {
      printf("+");
      if (n >= 2) {
        for (j = 2; j <= 2 * n - 1; j++) {
          printf("-");
        }
      }
      printf("+");
    } else {
      printf("|");
      for ( j = 1; j <= n - i; j++) {
        printf(" ");
      }
      printf("\\");
      for ( j = 1; j <= 2 * i - 4; j++) {
        printf(" ");
      }
      printf("/");
      for ( j = 1; j <= n - i; j++) {
        printf(" ");
      }
      printf("|");
    }
    printf("\n");
  }
}

///////////////////////////////////
// DO NOT CHANGE THE BELOW CODE! //
///////////////////////////////////

int main(void) {
  int BOX = lookup_symbol("box");
  int FANCY_BOX = lookup_symbol("fancybox");
  // if there is any invalid input, the program simply stops
  //   with no error message
  while (1) {
    int cmd = read_symbol();
    if (cmd == BOX) {
      int width = read_int();
      int height = read_int();
      int c = read_char(true);
      if (height == READ_INT_FAIL || c == READ_CHAR_FAIL) {
        break;
      }
      draw_box(width, height, c);
    } else if (cmd == FANCY_BOX) {
      int size = read_int();
      if (size == READ_INT_FAIL) {
        break;
      }
      draw_fancy_box(size);
    } else {
      break;
    }
    printf("\n");
  }
}