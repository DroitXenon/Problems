#include<iostream>
#include<cstring>
using namespace std;
int r[2000005], v[1005];
int main() {
	int n, i, max, maxr, max1, maxx, huge,ans;
	memset(v, 0, sizeof(v));
	cin >> n;
	max = 0;
	max1 = 0;
	maxr = 0;
	for (i = 1; i <= n; i++) {
		cin >> r[i];
		v[r[i]]++;
		if ((max < v[r[i]]) || ((max == v[r[i]]) && (r[i] < maxr))) {
			max = v[r[i]];
			maxr = r[i];
		}
		if (max1 < r[i]) {
			//	max2 = max1;
			max1 = r[i];
		}
	}
	maxx = v[max1];
	huge = max1;
	ans = 0;
	for (i = 1; i <= max1 + 1; i++) {
		if (i != maxr) {
			if (v[i] > maxx) {
				maxx = v[i];
				huge = i;
				ans = abs(huge - maxr);
			}
		}
	}
	//cout << huge << endl;
	for (i = 1; i <= max1; i++) {
		if (i != maxr)
			if ((v[i] == v[huge]) && (abs(i - maxr)>ans)) {
				huge = i;
				ans = abs(huge - maxr);
			}
	}
	//cout << huge<<endl;  
	//cout << maxr<<endl;
	cout << ans;
	return 0;
}

//100