#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int i,n, p, f,cs;
	int s[50];
	cin >> n;
	cs = 0;
	for (i = 1; i <= n; i++) {
		cin >> p >> f;
		s[i] = 5 * p - 3 * f;
		if (s[i] > 40) cs++;
	}
	cout << cs;
	if (cs == n) cout << "+";
	return 0;
}


