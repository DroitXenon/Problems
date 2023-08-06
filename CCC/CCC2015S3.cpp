#include<iostream>
using namespace std;
bool g[10002];
int main() {
	int G, P,dock,j,sum;
	cin >> G >> P;
	sum = 0;
	memset(g, true, sizeof(g));
	for (int i = 1; i <= P; i++) {
		cin >> dock;
		for (j=dock;j>=1;j--)
			if (j <= G and g[j]) {
				g[j] = false;
				sum++;
				break;
			}
		if (j == 0) break;
	}
	cout << sum;
	return 0;
}

//19 min