#include <stdio.h>

int main(void) {
    int t = 0;
    int n = 0;
    int a[100] = {0};
    int b[100] = {0};
    int c[100] = {0};
    scanf("%d",t);
    for (int i = 0; i < t; i++) {
        scanf("%d", n);
        for (int j = 0; j < n; j++) {
            scanf("%d", a[j]);
        }
        qsort(a, n);
    }
}