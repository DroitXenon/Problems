#include<iostream>
using namespace std;
int main() {
	long long n, m, k,ans,t;
	m = 0;
	t = 0;
	k = 0; 
	cin >> n>> m>> k;
	t = 0;
	if (n < m) {
		t = m;
		m = n;
		n = t;
	}
	if (n + m < k + 2) {
		cout << "-1";
		return 0;
	}
	else if (k < n) ans = (n / (k+1))*m;
	else {
		k = k - n + 2;
		ans = m / k;
	}
	//cout << n<< m<< k;
	cout << ans;
	return 0;
}