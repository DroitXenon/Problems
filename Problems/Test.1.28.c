#include <stdio.h>

int digit_number(int n, int k) {
  if (n == 0) {
    return k;
  } else {
    k++;
    return digit_number(n / 10, k);
  }
}

int total_digit(int n) {
  return digit_number(n, 0) + (digit_number(n, 0) - 1) / 3;
}

void output_format(int n) {
  if (n > 999) {
    output_format(n / 1000);
    printf(",%.3d",n % 1000);
  } else {
    printf("%d",n % 1000);
  }
}

int main() {
    int n;
    //scanf("%d",&n);
    //printf("%d\n", digit_number(n, 0) + (digit_number(n, 0) - 1) / 3);
    output_format(999);
    return 0;
}