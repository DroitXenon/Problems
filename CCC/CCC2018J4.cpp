#include<iostream>
using namespace std;
int main() {
	int n, i, j,x,b,c,d,min;
	int a[105][105];
	cin >> n;
	for (i = 1; i <= n; i++) 
		for (j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (i == 1 && j == 1) {
				x = a[i][j];
				min = x;
			}
			if (i == 1 && j == n) {
				b = a[i][j];
				if (b < min) min = b;
			}
			if (i == n && j == 1) {
				c = a[i][j];
				if (c < min) min = c;
			}
			if (i == n && j == n) {
				d = a[i][j];
				if (d < min) min = d;

			}
		}
	if (min == x) 
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	if (min == b)
		for (j = n; j >= 1; j--)
			for (i = 1; i <= n; i++)
				cout << a[i][j];

	return 0;
}