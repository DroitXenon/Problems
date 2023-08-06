#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long n, max, lsum, rsum, x, i, imax;
	int l[100005], r[100005];
	cin >> n;
	max = 0;
	lsum = 0;
	rsum = 0;
	imax = 0;
	for (i = 1; i <= n; i++) {
		cin >> l[i] >> r[i];
		x = abs(l[i] - r[i]);
		if (x > max) {
			max = x;
			imax = i;
		}
		lsum += l[i];
		rsum += r[i];
	}
	if (max * 2 > abs(lsum - rsum)) cout << imax;
	else cout << "0";
	return 0;
}