#include <stdio.h>

int cmpfunc(const void *a,const void *b){
    return(*(int *)b-*(int *)a); 
}

int main(void){
    int a[101],t,n,k,swap;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++){
        scanf("%d",&n);
        for (int j = 0; j < n; j++){
            scanf("%d",&a[j]);
        }
        qsort (a, n, sizeof(int), cmpfunc);
        if (a[0] == a[1]){
            if ((a[2] == 0) || (n == 2) || a[2] == a[1]){
                printf("NO\n");
                continue;
            }
            else {
                swap = a[2];
                a[2] = a[0];
                a[0] = swap;
            }
        }
        printf("YES\n");
        for (int k = 0; k < n; k++){
            printf("%d ",a[k]);
        }
    }
    /*
    for (int k = 0; k < n; k++){
            printf("%d ",a[k]);
        }
    */
    //printf("number is %d\n",t);
    return 0;
}