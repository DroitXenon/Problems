#include<iostream>
using namespace std;
int main() {
	int a[3][3],i;
	string str;
	cin >> str;
	a[1][1] = 1;
	a[1][2] = 2;
	a[2][1] = 3;
	a[2][2] = 4;
	for (i = 0; i < str.length(); i++) {
		if (str[i] == 'H') {
			swap(a[1][1], a[2][1]);
			swap(a[1][2], a[2][2]);
		}
		else {
			swap(a[1][1], a[1][2]);
			swap(a[2][1], a[2][2]);
		}
	}
	cout << a[1][1] << " " << a[1][2] << " " << endl << a[2][1] << " " << a[2][2];
	return 0;
}
//4