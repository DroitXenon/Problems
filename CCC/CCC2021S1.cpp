#include <iostream>
using namespace std;
int main() {
	int N;
	double h[102], w[102], c[102],ans;
	cin >> N;
	ans = 0;
	for (int i = 1; i <= N+1; i++) {
		cin >> h[i];
		c[i] = (h[i] + h[i - 1]) / 2;
	}
	c[1] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> w[i];
		ans = ans + w[i] * c[i + 1];
	}
	cout <<ans;
	return 0;
}