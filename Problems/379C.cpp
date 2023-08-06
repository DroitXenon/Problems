#include<iostream>
#include<math.h>
using namespace std;
struct people {
	int num;
	int ord;
};
people a[300002];
int b[300002];
int main() {
	int n, i, j, temp;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i].num;
		a[i].ord = i;
	}
	for (i = 0; i < n; i++)
		for (j = i + 1; j > 0; j--)
			if (a[j - 1].num > a[j].num) {
				temp = a[j - 1].num;
				a[j - 1].num = a[j].num;
				a[j].num = temp;
				temp = a[j - 1].ord;
				a[j - 1].ord = a[j].ord;
				a[j].ord = temp;
			}
	for (i = 1; i <= n; i++)
		if (b[i - 1] < a[i].num)
			b[i] = a[i].num;
			else if (b[i - 1] == a[i].num)
				b[i] = a[i].num + 1;
				else b[i] = b[i - 1] + 1;
	//for (i = 1; i <= n; i++)
		//cout << b[i];
	for (i = 0; i < n; i++)
		for (j = i + 1; j > 0; j--)
			if (a[j - 1].ord > a[j].ord) {
				temp = b[j - 1];
				b[j - 1] = b[j];
				b[j] = temp;
				temp = a[j - 1].ord;
				a[j - 1].ord = a[j].ord;
				a[j].ord = temp;
			}
	for (i = 1; i <= n; i++)
	cout << b[i]<<" ";
	return 0;
}