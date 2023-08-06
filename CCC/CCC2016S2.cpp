#include<iostream>
using namespace std;
int main() {
	int sum,temp, i, j, q, n, d[102], p[102];
	sum = 0;
	cin >> q >> n;
	for (i = 1; i <= n; i++) {
		cin >> d[i];
	}
	for (i = 1; i <= n; i++) {
		cin >> p[i];
	}
	for(i=1;i<=n;i++)
		for (j = i; j <= n; j++) {
			if (d[j - 1] > d[j]) {
				temp = d[j - 1];
				d[j - 1] = d[j];
				d[j] = temp;
			}
		}
	if (q == 1) {
		for (i = 1; i <= n; i++)
			for (j = i; j <= n; j++) {
				if (p[j - 1] > p[j]) {
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		for (i = 1; i <= n; i++)
			sum += max(d[i], p[i]);
		cout << sum;
	}
	if (q == 2) {
		for (i = 2; i <= n; i++)
			for (j = n; j >=i ; j--) {
				if (p[j - 1] < p[j]) {
					temp = p[j - 1];
					p[j - 1] = p[j];
					p[j] = temp;
				}
			}
		for (i = 1; i <= n; i++)
			//cout << p[i];
			sum += max(d[i], p[i]);
		
		cout << sum;
	}
	return 0;
}