#include <iostream>
using namespace std;
int main() {
	int a, b, c,d,sum;
	cin >> d;
	a = 12;
	b = 0;
	c = 0;
	sum = 0;
	while (d > 0) {
		d--;
		c++;
		if (c == 10) {
			c = 0;
			b++;
		}
		if (b == 6) {
			a++;
			b = 0;
		}
		if (a == 13) {
			a = 1;
		}
		if (a == 11 && b == 1 && c == 1) sum++;
		if (a == 12 && b == 3 && c == 4) sum++;
		if ((a<10 ) && ((a - b) == (b - c))) sum++;
	}
	cout << sum;
}