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

#include "cs136.h"

const int EI = 158;
const int CPP = 57;
const int RANK_1 = 33;
const int RANK_2 = 29;
const int RANK_3 = 26;
const int RANK_4 = 205;
const int RANK_5 = 15;
const int INCOME_1 = 216511;
const int INCOME_2 = 151978;
const int INCOME_3 = 98048;
const int INCOME_4 = 49020;

// print_space(star_n, end_n) produce space with a total number 
//  of (end_n - start_n)
// effect: produce output
// require: start_n <= end_n
void print_space(int start_n, int end_n ) {
  assert (start_n <= end_n);
  if (start_n < end_n) {
    printf(" ");
    start_n++;
    print_space(start_n, end_n);
  } 
}

// digit_number(n, k) returns the digit number of n
// require: n is not negative
//          k is not negative
int digit_number(int n, int k) {
  assert(k >= 0);
  assert(n >= 0);
  if (n == 0) {
    return k;
  } else {
    k++;
    return digit_number(n / 10, k);
  }
}

// total_digit(n) returns the total digit of number n, including ","
// require: n is not negative
int total_digit(int n) {
  assert(n >= 0);
  if (n == 0) {
    return 1;
  } else {
    return digit_number(n, 0) + (digit_number(n, 0) - 1) / 3;
  }
}

// output_format print number n, adding "," to it
// require: n is not negative
// effect: produce output
void output_format(int n) {
  assert(n >= 0);
  if (n > 999) {
    output_format(n / 1000);
    printf(",%.3d",n % 1000);
  } else {
    printf("%d",n % 1000);
  }
}

// calculate_tax_dollar(n, rank) calculates the federal_taxes of dollar part
// require: rank is between 1 to 5
//          n is not negative
int calculate_tax_dollar(int n, int rank) {
  assert(n >= 0);
  assert(rank >=1 && rank <= 5);
  if (rank == 1) {
    return (n - INCOME_1) * RANK_1 + 5014055; 
  } else if (rank == 2) {
      return (n - INCOME_2) * RANK_2 + 3142598;
  } else if (rank == 3) {
      return (n - INCOME_3) * RANK_3 + 1740210;
  } else if (rank == 4) {
      return (n - INCOME_4) * RANK_4 / 10 + RANK_5 * INCOME_4;
  } else {
      return n * RANK_5;
  }
}

// calculate_tax_dollar(n, rank) calculates the federal_taxes of cent part
// require: rank is between 1 to 5
//          n is not negative
int calculate_tax_cent(int n, int rank) {
  assert(n >= 0);
  assert(rank >=1 && rank <= 5);
  if (rank == 1) {
    return n * RANK_1; 
  } else if (rank == 2) {
      return n * RANK_2;
  } else if (rank == 3) {
      return n * RANK_3;
  } else if (rank == 4) {
      return n * RANK_4 / 10;
  } else {
      return n * RANK_5;
  }
}

// calculate_tax_dollar(n, rank) calculates the federal_taxes
// require: base is positive integer
int calculate_federal_taxes(int base) {
  assert(base > 0);
  int rank;
  if (base / 100 > INCOME_1) {
    rank = 1;
  } else if (base / 100 > INCOME_2) {
    rank = 2;
  } else if (base / 100 > INCOME_3) {
    rank = 3;
  } else if (base / 100 > INCOME_4) {
    rank = 4;
  } else {
    rank = 5;
  }
  return calculate_tax_dollar(base / 100, rank) + calculate_tax_cent(base % 100, rank) / 100;  
}


// calculate_premiums(n, rank) calculates the premiums of CPP and EI
// require: base is positive integer
int calculate_premiums(int base) {
  assert(base > 0);
  return base / 1000 * CPP + base % 1000 * CPP / 1000
  + base / 10000 * EI + base % 10000 * EI / 10000;
}

// output_pay(base) print the formated required answer
// require: base is positive
void output_pay(int base) {
  assert(base > 0);
  printf("$ ");
  output_format(base / 100);
  printf(".%.2d Base Pay\n$ ",base % 100);
  print_space(0,total_digit(base / 100) - total_digit(calculate_federal_taxes(base) / 100));
  output_format(calculate_federal_taxes(base) / 100);
  printf(".%.2d Federal Taxes\n$ ",calculate_federal_taxes(base) % 100);
  print_space(0,total_digit(base / 100) - total_digit(calculate_premiums(base) / 100));
  output_format(calculate_premiums(base) / 100);
  printf(".%.2d CPP and EI Premiums\n\n",calculate_premiums(base) % 100);
}


/////////////////////////////////////////////
// DO NOT MODIFY THE CODE BELOW
/////////////////////////////////////////////
// read_int_rec() reads from input and outputs the
//   results from output_pay()
// effects: reads input
//          produces output
void read_int_rec(void) {
  int n = read_int();
  if (n == READ_INT_FAIL) {
    return;
  }
  else {
    output_pay(n);
    read_int_rec();
  }
}
int main(void) {
  read_int_rec();
}