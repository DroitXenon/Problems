/////////////////////////////////////////////////////////////////////////////////////////
// INTEGRITY STATEMENT (v4)
//
// By signing your name and ID below you are stating that you have agreed
// to the online academic integrity statement posted on edX:
// (Course > Assignments > Assignment Information & Policies > Academic Integrity Policy)
/////////////////////////////////////////////////////////////////////////////////////////
// I received help from and/or collaborated with:

// None
//
// Name: Justin Wang
// login ID: 21011838
//////////////////////////////////////////////////////////////////////////////////////////

// This code doesn't do anything special.
// We just wanted some fun names (identifiers)

#include <stdio.h>

const int d = 95;
int f = 23;

int biff(int a);
int bam(int a);
int powpow(int a);

int biff(int a) {
  int ret = 0;
  if (a == 23) {
    ret = bam(a + 1);
  }
  int val = ret + 10;
  printf("BIFF!\n");        // snapshot here (twice)
  return val;
}

int bam(int a) {
  f = 5;
  const int ret = d + powpow(a);
  printf("BAM!\n");           // snapshot here
  return ret;
}

int powpow(int a) {
  int ret = biff(f);
  printf("POW!\n");           // snapshot here
  return ret;
}

int main(void) {
  int a = biff(f);
  printf("a = %d\n", a);
}