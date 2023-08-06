#include<iostream>
#include<math.h>
using namespace std;
long long l[1000005];
int main() {
	int i, j;
	bool finda, findb;
	long long answer, a, b,n, temp;
	cin >> n;
	a = 0;
	b = 0;
	finda = false;
	findb = false;
	for (int i = 1; i <= n; i++)
		cin >> l[i];
	for (i = 1; i < n; i++)
		for (j = i + 1; j > 1; j--)
			if (l[j - 1] < l[j]) {
				temp = l[j - 1];
				l[j - 1] = l[j];
				l[j] = temp;
			}
	//for (int i = 1; i <= n; i++)
		//cout << l[i];
	for (i = 1; i <= n; i++) {{
		if (!findb)
		if (l[i] == l[i + 1]) {
			a = l[i];
			finda = true;
			break;
		}
		else if (l[i] - 1 == l[i + 1]) {
			a = l[i + 1];
			finda = true;
			break;
		}
	}
	if (finda)
		for (j = i + 2; i <= n; i++)
			if (l[j] == l[j + 1]) {
				b = l[j];
				findb = true;
				break;
			}
			else if (l[j] - 1 == l[j + 1]) {
				b = l[j + 1];
				findb = true;
				break;
			}
	//cout << a;
	//cout << b;
	if (finda&findb) answer += a * b;
	finda = false;
	findb = false;
	
	}
	cout << answer;
	
	return 0;
}