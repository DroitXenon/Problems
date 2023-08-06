#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n, m, i, j, rjs, cjs;
	int x, y;
	int r[1002], c[1002];
	char row[1002], col[1002];
	bool cg = false;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		r[i] = 0;
		c[i] = 0;
	}
	rjs = 0;
	cjs = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			cin >> col[j];
			if (col[j] == '*') { r[i]++; c[j]++; }
			if (c[j] > 1) cjs++;
		}
		if (r[i] > 1) rjs++;
	}
	if (rjs > 1 && cjs > 1) {
		cout << "NO";
		return 0;
	}
	for (i = 1; i <= n; i++) {
		if (r[i] >= 2) {
			for (j = 1; j <= m; j++) {
				c[j]++;
				if (c[j] >= 3) {
					cout << "YES" << endl << i << " " << j;
					cg = true;
					return 0;
				}
				c[j]--;
			}
			cout << "YES" << endl << i << " " << "1";
			return 0;
		}
	}
	for (i = 1; i <= m; i++) {
		if (c[i] >= 2) {
			for (j = 1; j <= n; j++) {
				r[j]++;
				if (r[j] >= 3) {
					cout << "YES" << endl << j << " " << i;
					cg = true;
					return 0;
				}
				r[j]--;
			}
			cout << "YES" << endl << "1" << " " << i;
			return 0;
		}
	}
	x = 0;
	y = 0;
	for (i = 1; i <= n; i++) {
		if (r[i] == 1) {
			x++;
			for (j = 1; j <= m; j++) {
				if (c[j] == 1) {
					y++;
					break;
				}
			}
		}
	}
	if (x == 1 && y == 1) {
		cout << "YES" << endl << "1" << " " << j;
		cg = true;
		return 0;
	}
	if (x == 0&& y ==0) {
		cout << "YES" << endl << "1" << " " << "1";
		cg = true;
		return 0;
	}
	if (!cg) cout << "NO";
	return 0;
}