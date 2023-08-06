#include <iostream>
using namespace std;
int main() {
	int n, i,j,sum;
	string str;
	cin >> n;
	sum = 1;
	for (i = 1; i <= n; i++) {
		cin >> str;
		str += '*';
		for (j = 1; j < str.length();j++) {
			if (str[j - 1] != str[j]) {
				cout << sum << " " << str[j - 1]<<" ";
				sum = 1;
			}
			else sum++;
		}
		cout << endl;

	}
	return 0;
}

//13