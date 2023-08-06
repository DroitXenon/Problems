#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n, i, j;
	long v[105];
	double a[105], min;
	cin >> n;
	min = 100000000;
	for (i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (i = 2; i <= n; i++)
		for (j = n; j >= i; j--) {
			if (v[j - 1] > v[j])
				swap(v[j - 1], v[j]);
		}
	for (i = 2; i <= n - 1; i++) {
		a[i] = (v[i + 1] - v[i - 1])/2;
		if (a[i] < min) min = a[i];
	}
	
	cout <<fixed<<setprecision(1)<<min;
	return 0;
}