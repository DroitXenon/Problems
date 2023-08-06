#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int i, j, k, temp, sum;
    int a[13];
    bool result;
    cin >> k;
    for (i = 0; i < 12; i++)
        cin >> a[i];
    for (i = 0; i < 12; i++)
        for (j = i; j > 0; j--)
            if (a[j - 1] < a[j]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
    sum = 0;
    result = false;
    for (i = 0; i <=12; i++) {
        if (sum >= k) {
            result = true;
            break;
        }
        sum += a[i];
    }
    if (result) cout << i;
    else cout << "-1";
    return 0;
}
