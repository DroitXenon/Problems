#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n,i,m,p;
	long k;
	int line[100005];
	cin >> n >> k;
	m = 0;
	p = 0;
	for (i = 1; i <= n; i++) {
		cin >> line[i];
		m = m + 1;
		p = p + m;
		if (p >= k) break;
	}
	cout << line[m - p + k];
	return 0;
}