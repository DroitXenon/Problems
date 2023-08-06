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

void print_char(char c[2], int start_n, int end_n ) {
  assert (start_n <= end_n );
  if (start_n < end_n) {
    printf("%s",c);
    start_n++;
    print_char(c, start_n, end_n);
  } 
}

int digit_number(int n, int k) {
  if (n == 0) {
    return k;
  } else {
    k++;
    return digit_number(n / 10, k);
  }
}

int total_digit(int n) {
  if (n == 0) {
    return 1;
  } else {
    return digit_number(n, 0) + (digit_number(n, 0) - 1) / 3;
  }
}

void output_format(int n) {
  if (n > 999) {
    output_format(n / 1000);
    printf(",%.3d",n % 1000);
  } else {
    printf("%d",n % 1000);
  }
}

// add documentation
int calculate_federal_taxes(int base) {
  if (base > 216511) {
    return (base - 216511) * 33 + 5014055; 
  } else if (base > 151978) {
      return (base - 151978) *29 + 3142598;
  } else if (base > 98040) {
      return (base - 98048) *26 + 1740210;
  } else if (base > 49020) {
      return (base - 49020) *205 / 10 + 735300;
  } else {
      return base * 15;
  }
}

// add documentation
int calculate_premiums(int base) {
  return (base * 57 /10 + base * 158 / 100);
}

// add documentation
void output_pay(int base) {
  int federal_taxes_dollar, federal_taxes_cent, premiums_dollar, premiums_cent;
  printf("$ ");
  output_format(base / 100);
  printf(".%.2d Base Pay\n",base % 100);
  printf("$ ");
  federal_taxes_dollar = calculate_federal_taxes(base / 100) / 100;
  federal_taxes_cent = calculate_federal_taxes(base / 100) % 100 + calculate_federal_taxes(base % 100) / 100;
  print_char(" ",0,total_digit(base / 100) - total_digit(federal_taxes_dollar));
  output_format(federal_taxes_dollar);
  printf(".%.2d Federal Taxes\n",federal_taxes_cent);
  
  //printf("%d\n\n",total_digit(base / 100) - total_digit(federal_taxes_dollar));
  
  printf("$ ");
  premiums_dollar = calculate_premiums(base / 100) / 100;
  premiums_cent = calculate_premiums(base / 100) % 100 + calculate_premiums(base % 100) / 100;
  print_char(" ",0,total_digit(base / 100) - total_digit(premiums_dollar));
  output_format(premiums_dollar);
  printf(".%.2d CPP and EI Premiums\n\n",premiums_cent);
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

void print_char(char c[2], int start_n, int end_n ) {
  assert (start_n <= end_n );
  if (start_n < end_n) {
    printf("%s",c);
    start_n++;
    print_char(c, start_n, end_n);
  } 
}

int digit_number(int n, int k) {
  if (n == 0) {
    return k;
  } else {
    k++;
    return digit_number(n / 10, k);
  }
}

int total_digit(int n) {
  if (n == 0) {
    return 1;
  } else {
    return digit_number(n, 0) + (digit_number(n, 0) - 1) / 3;
  }
}

void output_format(int n) {
  if (n > 999) {
    output_format(n / 1000);
    printf(",%.3d",n % 1000);
  } else {
    printf("%d",n % 1000);
  }
}

// add documentation
int calculate_tax_dollar(int n, int rank) {
  if (rank == 1) {
    return (n - 216511) * 33 + 5014055; 
  } else if (rank == 2) {
      return (n - 151978) *29 + 3142598;
  } else if (rank == 3) {
      return (n - 98048) *26 + 1740210;
  } else if (rank == 4) {
      return (n - 49020) *205 / 10 + 735300;
  } else {
      return n * 15;
  }
}

int calculate_tax_cent(int n, int rank) {
  if (rank == 1) {
    return n * 33; 
  } else if (rank == 2) {
      return n * 29;
  } else if (rank == 3) {
      return n * 26;
  } else if (rank == 4) {
      return n * 205 / 10;
  } else {
      return n * 15;
  }
}

int calculate_federal_taxes(int base) {
  int rank;
  if (base > 21651100) {
    rank = 1;
  } else if (base > 15197800) {
    rank = 2;
  } else if (base > 9804000) {
    rank = 3;
  } else if (base > 4902000) {
    rank = 4;
  } else {
    rank = 5;
  }
  return calculate_tax_dollar(base / 100, rank) + calculate_tax_cent(base % 100, rank) / 100;  
}

int calculate_premiums_dollar(int n) {
  return n * 728 / 10;
}

int calculate_premiums_cent(int n) {
  return n * 728 / 10;
}

// add documentation
int calculate_premiums(int base) {
  return calculate_premiums_dollar(base / 1000) + calculate_premiums_cent(base % 1000) / 1000;
}

// add documentation
void output_pay(int base) {
  printf("$ ");
  output_format(base / 100);
  printf(".%.2d Base Pay\n$ ",base % 100);
  print_char(" ",0,total_digit(base / 100) - total_digit(calculate_federal_taxes(base) / 100));
  output_format(calculate_federal_taxes(base) / 100);
  printf(".%.2d Federal Taxes\n& ",calculate_federal_taxes(base) % 100);
  print_char(" ",0,total_digit(base / 100) - total_digit(calculate_premiums(base) / 100));
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